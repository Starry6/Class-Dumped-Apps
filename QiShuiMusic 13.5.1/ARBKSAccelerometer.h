@interface ARBKSAccelerometer : NSObject
- (void)dealloc;
- (id)initPrivate;
- (long long)rawOrientation;
- (long long)currentOrientation;
- (void).cxx_destruct;
+ (id)sharedWeakAccelerometerHandle;
+ (id)sharedAccelerometerHandle;
@end
