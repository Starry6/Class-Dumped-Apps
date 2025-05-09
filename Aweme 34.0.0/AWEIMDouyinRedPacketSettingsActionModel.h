@interface AWEIMDouyinRedPacketSettingsActionModel : AWEBaseApiModel
@property (nonatomic) NSString actionId;
@property (nonatomic) NSString type;
@property (nonatomic) NSString availableDuration;
@property (nonatomic) NSArray coverList;
@property (nonatomic) NSString defaultCoverId;
@property (nonatomic) AWEIMDouyinRedPacketCoverModel defaultSelectedCover;
@property (nonatomic) NSArray amountList;
@property (nonatomic) NSString defaultRandomCoverId;
@property (nonatomic) AWEIMDouyinRedPacketCoverModel defaultRandomCover;
@property (nonatomic) Q refreshMode;
@property (nonatomic) AWEIMDouyinRedPacketSwitchBtnConfigModel switchTypeBtnConfig;
@property (nonatomic) BOOL redDotTipsShow;
@property (nonatomic) NSString selectedGuideDesc;
- (id)coverList;
- (void)setCoverList:;
- (void)setRefreshMode:;
- (unsigned long long)refreshMode;
- (id)defaultCoverId;
- (id)defaultRandomCoverId;
- (id)defaultRandomCover;
- (void)setDefaultSelectedCover:;
- (void)setDefaultRandomCover:;
- (id)amountList;
- (void)setSwitchTypeBtnConfig:;
- (id)switchTypeBtnConfig;
- (id)defaultSelectedCover;
- (void)setDefaultCoverId:;
- (void)setAmountList:;
- (void)setDefaultRandomCoverId:;
- (BOOL)redDotTipsShow;
- (void)setRedDotTipsShow:;
- (id)selectedGuideDesc;
- (void)setSelectedGuideDesc:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)availableDuration;
- (void)setAvailableDuration:;
- (id)actionId;
- (void)setActionId:;
+ (id)coverListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
