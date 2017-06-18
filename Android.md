public static Intent createExplicitFromImplicitIntent(Context context,Intent implicitIntent) {

    PackageManager pm = context.getPackageManager();
    List<ResolveInfo> resolveInfo = pm.queryIntentServices(implicitIntent,0);
    if (resolveInfo == null || resolveInfo.size() != 1) {
        return null;
    }
    ResolveInfo serviceInfo = resolveInfo.get(0);
    String packageName = serviceInfo.serviceInfo.packageName;
    String className = serviceInfo.serviceInfo.name;
    ComponentName component = new ComponentName(packageName, className);
                                                                    
    Intent explicitIntent = new Intent(implicitIntent);
    explicitIntent.setComponent(component);

    return explicitIntent;
}

class MyApp extends Application {

    private static MyApp instance;
                
    public static MyApp getInstance(){
        return instance;
    }
                    
    @Override
    public void onCreate(){
        onCreate();
        instance = this;
    }
}
