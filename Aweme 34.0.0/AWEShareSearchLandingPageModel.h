@interface AWEShareSearchLandingPageModel : NSObject
@property (nonatomic) UIViewController<BDXPageContainerProtocol> bdxContainerVC;
@property (nonatomic) BDXContext bdxContext;
@property (nonatomic) @? needShowTranscodingSwitchBlock;
@property (nonatomic) @? transcodingEnabledBlock;
@property (nonatomic) @? completionBlock;
@property (nonatomic) NSDictionary shareInfo;
- (id)bdxContext;
- (void)setBdxContext:;
- (id)transcodingEnabledBlock;
- (id)bdxContainerVC;
- (id)needShowTranscodingSwitchBlock;
- (void)setBdxContainerVC:;
- (void)setNeedShowTranscodingSwitchBlock:;
- (void)setTranscodingEnabledBlock:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (id)shareInfo;
- (void).cxx_destruct;
- (void)setShareInfo:;
@end
