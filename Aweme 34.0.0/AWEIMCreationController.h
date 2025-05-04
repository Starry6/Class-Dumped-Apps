@interface AWEIMCreationController : NSObject
@property (nonatomic) BOOL hasOpenCamera;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} mutex;
- (void)setMutex:;
- (BOOL)hasOpenCamera;
- (void)setHasOpenCamera:;
- (id)init;
- (id)mutex;
+ (id)writeImageDataToDisk:;
+ (id)p_stringConcatWithStr:otherStr:;
+ (id)saveImageToLocalWithImage:;
+ (void)startCreationWithParams:completion:;
+ (id)imageDataForImage:;
+ (id)shareInstance;
@end
