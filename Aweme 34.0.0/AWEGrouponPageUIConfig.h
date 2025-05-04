@interface AWEGrouponPageUIConfig : NSObject
@property (nonatomic) BOOL enableSwitchBtn;
@property (nonatomic) BOOL enableSearch;
@property (nonatomic) BOOL enableCitySelectView;
@property (nonatomic) q feedType;
@property (nonatomic) BOOL enableRefreshHeader;
@property (nonatomic) BOOL enableSinglePageNavBackBtn;
@property (nonatomic) BOOL enableTopTab;
@property (nonatomic) BOOL enableBottomTab;
- (BOOL)enableSearch;
- (void)setEnableRefreshHeader:;
- (BOOL)enableRefreshHeader;
- (void)setEnableSearch:;
- (BOOL)enableTopTab;
- (BOOL)enableSwitchBtn;
- (BOOL)enableSinglePageNavBackBtn;
- (BOOL)enableCitySelectView;
- (void)setEnableSwitchBtn:;
- (void)setEnableCitySelectView:;
- (void)setEnableTopTab:;
- (void)setEnableBottomTab:;
- (void)setEnableSinglePageNavBackBtn:;
- (BOOL)enableBottomTab;
- (long long)feedType;
- (void)setFeedType:;
@end
