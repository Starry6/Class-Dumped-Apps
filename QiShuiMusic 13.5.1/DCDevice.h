@interface DCDevice : NSObject
@property (nonatomic) BOOL supported;
- (BOOL)isSupported;
- (BOOL)_isSupportedReturningError:;
- (void)generateTokenWithCompletionHandler:;
+ (id)currentDevice;
@end
