@interface BDXServiceSetupTask : NSObject
@property (nonatomic) Protocol prococol;
@property (nonatomic) NSString bizID;
@property (nonatomic) @? action;
- (id)prococol;
- (void)setBizID:;
- (void)setPrococol:;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
- (id)bizID;
+ (id)taskWithService:bizID:action:;
@end
