@interface AWECreativeInspirationService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)currentIsInspirationPath;
- (BOOL)shouldBottomBarFollowedCell;
- (id)inspirationSelectLoraInfo;
- (BOOL)currentIsLoraModel:;
- (BOOL)multiLoraIsBlockList:;
- (void)inspirationSelectLoraInfo:model:;
- (id)detailBottomBarView;
- (BOOL)currentIsLoraSuiteModel:;
- (id)inspirationBottomGradientView;
- (double)inspirationBottomGradientViewHeight;
- (double)detailBottomBarViewHeight;
- (void)updateBottomContentInfoWithContentView:awemeModel:;
- (id)createLoraSuiteBottomContentViewWithElementCommonBottomOffSet:;
- (id)createBottomContentViewWithElementCommonBottomOffSet:;
- (void)webImageMainColorWithTargetView:aweme:;
- (double)inspirationBottomGradientColorAlpha;
- (BOOL)currentIsInspirationPathWithViewController:;
- (void)webImageMainColorWithTargetView:aweme:gradientView:;
@end
