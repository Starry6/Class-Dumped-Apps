@interface AWESiriConfigBundleStorage : NSObject
+ (void)storeSiriConfigInBundle:config:userInfo:;
+ (id)getStoredSiriConfigInBundle;
@end
