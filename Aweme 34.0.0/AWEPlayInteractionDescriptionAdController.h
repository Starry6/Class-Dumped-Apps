@interface AWEPlayInteractionDescriptionAdController : NSObject
@property (nonatomic) AWEPlayInteractionDescriptionContext descriptionContext;
@property (nonatomic) NSObject<AWEAdMannorAdLinkMoreManager> mannorAdLinkMoreManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)setShadowWithAdMoreTag:;
- (void)trackProductEntranceShowIfNeededWithContext:;
- (void)showLongVideoAdDescriptionText:;
- (id)getTailExtraModelWithContext:;
- (id)calculateTruncationTokenWithContext:;
- (id)createAdMoreLinkImageWithContext:;
- (BOOL)enableLargeFontAdapt;
- (BOOL)usePanelGuideWithContext:;
- (id)advanceParserDescriptionWithContext:;
- (id)setTruncationTokenIfNeedWithContext:;
- (id)getDescriptionLabelTapActionWithContext:;
- (void)viewController_willDisplayWithContext:;
- (id)mannorAdLinkMoreManager;
- (void)setMannorAdLinkMoreManager:;
- (id)init;
- (void)setUp;
- (void).cxx_destruct;
- (void)reset;
- (id)descriptionContext;
- (void)setDescriptionContext:;
@end
