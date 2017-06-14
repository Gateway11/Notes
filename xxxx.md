Intent intent = new Intent("intent");
ResolveInfo info = context.getPackageManager().resolveService(intent, 0);
if (info != null){
    ServiceInfo ai = info.serviceInfo;
    if ((ai.applicationInfo != null) && (ai.applicationInfo.packageName.equals("packagename"))){
        intent.setClassName(ai.applicationInfo.packageName, ai.name);
    }
}
res = context.bindService(intent, mTyidConnection, 1);
