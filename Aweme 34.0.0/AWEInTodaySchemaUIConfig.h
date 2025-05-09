@interface AWEInTodaySchemaUIConfig : MTLModel
@property (nonatomic) NSString playerTitle;
@property (nonatomic) NSString playerSubTitle;
@property (nonatomic) NSString playerEmptyText;
@property (nonatomic) NSString publishBtnText;
@property (nonatomic) NSString guideVideoName;
@property (nonatomic) NSString guideBtnAgree;
@property (nonatomic) NSString guideBtnRefuse;
@property (nonatomic) BOOL playerHideMenu;
@property (nonatomic) NSString agreementLink;
@property (nonatomic) NSString landingType;
@property (nonatomic) NSString landingID;
@property (nonatomic) NSString guideTitle;
@property (nonatomic) NSString guideHintText;
@property (nonatomic) NSString aggregatingText;
@property (nonatomic) NSString aggregatingProgressText;
@property (nonatomic) NSString aggregatingTextTips;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)landingType;
- (id)guideTitle;
- (void)setGuideTitle:;
- (void)setLandingType:;
- (id)agreementLink;
- (void)setAgreementLink:;
- (id)guideHintText;
- (void)setGuideHintText:;
- (BOOL)playerHideMenu;
- (id)playerEmptyText;
- (id)publishBtnText;
- (id)playerTitle;
- (id)landingID;
- (id)playerSubTitle;
- (void)setPlayerTitle:;
- (void)setPlayerSubTitle:;
- (void)setPlayerEmptyText:;
- (void)setPublishBtnText:;
- (id)guideVideoName;
- (void)setGuideVideoName:;
- (id)guideBtnAgree;
- (void)setGuideBtnAgree:;
- (id)guideBtnRefuse;
- (void)setGuideBtnRefuse:;
- (void)setPlayerHideMenu:;
- (void)setLandingID:;
- (id)aggregatingText;
- (void)setAggregatingText:;
- (id)aggregatingProgressText;
- (void)setAggregatingProgressText:;
- (id)aggregatingTextTips;
- (void)setAggregatingTextTips:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
