@interface BDUGLuckyDogResourceSchemaPopupLockGuard : NSObject
@property (nonatomic) BOOL locked;
- (void)startTimeoutMS:;
- (id)init;
- (void)dealloc;
- (void)setLocked:;
- (BOOL)locked;
@end
