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

 window->linkToDeath(static_cast<IBinder::DeathRecipient*>(this));  

android.os.Process.setThreadPriority(android.os.Process.THREAD_PRIORITY_FOREGROUND);
android.os.Process.setCanSelfBackground(false);
android.os.Looper.prepareMainLooper();
android.app.ActivityThread activityThread = android.app.ActivityThread.systemMain();
android.content.Context mSystemContext = activityThread.getSystemContext();
mSystemContext.setTheme(android.R.style.Theme_DeviceDefault_Light_DarkActionBar);
mSystemContext.sendBroadcast(new android.content.Intent("intent"));

public class MyApp extends Application {

    private static MyApp instance;
                
    public static MyApp asInstance(){
        return instance;
    }
                    
    @Override
    public void onCreate(){
        instance = this;
    }
}

     android:persistent="true"
