@interface AWERecordDefaultCameraPositionUtils : NSObject
+ (void)setDefaultPosition:;
+ (void)setDefaultPosition:forPersistenceKey:;
+ (long long)defaultPositionForPersistenceKey:;
+ (long long)devicePosition;
+ (void)setDevicePosition:;
+ (void)setSkip:;
+ (BOOL)skip;
+ (long long)defaultPosition;
@end
