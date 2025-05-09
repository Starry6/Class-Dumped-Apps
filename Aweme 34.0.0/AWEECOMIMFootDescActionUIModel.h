@interface AWEECOMIMFootDescActionUIModel : NSObject
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) Q showType;
@property (nonatomic) AWEECOMIMFooterTipsModel footerTipModel;
@property (nonatomic) AWEECOMIMUserConfig userConfig;
@property (nonatomic) BOOL showSwitchHuman;
@property (nonatomic) BOOL disableOldByFold;
@property (nonatomic) NSArray originalActionItemList;
@property (nonatomic) NSArray finalActionItemList;
@property (nonatomic) BOOL disableByAggregation;
@property (nonatomic) BOOL disableByFold;
@property (nonatomic) AWEECOMIMFootDescFoldUIModel foldModel;
@property (nonatomic) AWEECOMIMFootDescActionButtonStyle buttonStyle;
- (void)setFooterTipModel:;
- (id)footerTipModel;
- (id)userConfig;
- (void)setUserConfig:;
- (id)foldModel;
- (void)buildFinalActionItemList;
- (id)finalActionItemList;
- (BOOL)disableByAggregation;
- (BOOL)disableByFold;
- (BOOL)disableOldByFold;
- (void)setOriginalActionItemList:;
- (void)setShowSwitchHuman:;
- (void)setDisableByAggregation:;
- (void)setFoldModel:;
- (void)setDisableByFold:;
- (void)setDisableOldByFold:;
- (id)originalActionItemList;
- (void)setFinalActionItemList:;
- (BOOL)showSwitchHuman;
- (id)buttonStyle;
- (void)setButtonStyle:;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)setShowType:;
- (unsigned long long)showType;
@end
