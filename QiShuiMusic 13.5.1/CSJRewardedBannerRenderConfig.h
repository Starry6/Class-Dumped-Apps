@interface CSJRewardedBannerRenderConfig : NSObject
@property (nonatomic) CSJRewardBrowseBannerModel rewardBannerModel;
@property (nonatomic) CSJMaterialMeta materialMeta;
@property (nonatomic) NSString slotID;
@property (nonatomic) {CGSize=dd} renderSize;
@property (nonatomic) NSString button_text;
@property (nonatomic) NSString app_name;
@property (nonatomic) NSString title;
@property (nonatomic) NSString icon;
- (void)setButton_text:;
- (id)app_name;
- (id)button_text;
- (id)materialMeta;
- (id)rewardBannerModel;
- (void)setApp_name:;
- (void)setMaterialMeta:;
- (void)setRewardBannerModel:;
- (id)icon;
- (id)renderSize;
- (id)slotID;
- (void)setTitle:;
- (void)setSlotID:;
- (id)title;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setRenderSize:;
@end
