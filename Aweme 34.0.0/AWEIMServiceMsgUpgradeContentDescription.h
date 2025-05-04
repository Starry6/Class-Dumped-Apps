@interface AWEIMServiceMsgUpgradeContentDescription : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString lightIcon;
@property (nonatomic) NSString darkIcon;
@property (nonatomic) AWEIMServiceMsgUpgradeContentShowTips showTips;
- (id)lightIcon;
- (id)darkIcon;
- (void)setLightIcon:;
- (void)setDarkIcon:;
- (void)setShowTips:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)showTips;
+ (id)showTipsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
