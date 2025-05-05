@interface BDASDKSettingsProtocol : NSProxy
@property (nonatomic) @ obj;
- (BOOL)respondsToSelector:;
- (id)init;
- (id)obj;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (void)setObj:;
+ (id)sharedInstance;
@end
