@interface AWEPOIDetailNGFeedStatusComponentViewModel : DitoComponentViewModel
@property (nonatomic) DitoGeneralContainerPageContext generalContext;
@property (nonatomic) BOOL forceLight;
@property (nonatomic) Q loadingStyle;
@property (nonatomic) BOOL showFeedStatus;
- (void)setLoadingStyle:;
- (unsigned long long)loadingStyle;
- (BOOL)forceLight;
- (void)setForceLight:;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (id)generalContext;
- (void)setShowFeedStatus:;
- (BOOL)showFeedStatus;
- (double)componentHeightWithState;
- (id)initWithNode:;
@end
