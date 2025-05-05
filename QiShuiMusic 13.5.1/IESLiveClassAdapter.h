@interface IESLiveClassAdapter : NSProxy
@property (nonatomic) NSString realClassName;
@property (nonatomic) @ realObject;
- (void)private_setup;
- (id)realClassName;
- (id)realObject;
- (void)setRealClassName:;
- (void)setRealObject:;
- (void)dealloc;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
+ (id)methodSignatureForSelector:;
+ (void)forwardInvocation:;
@end
