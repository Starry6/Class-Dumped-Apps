@interface BMStoreDirectory : NSObject
+ (id)sync;
+ (id)remoteDevices;
+ (id)tmp;
+ (void)setBasePathForTestingWithPath:;
+ (id)sessions;
+ (id)tombstones;
+ (id)localDevice;
+ (id)metadata;
+ (id)public;
+ (id)lock;
+ (id)flexibleStorage;
+ (id)compute;
+ (void)unsetBasePathForTesting;
+ (id)private;
+ (id)streams;
+ (id)persistent;
+ (id)restricted;
@end
