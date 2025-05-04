@interface AWENoticeActionBarIconURLModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel darkIcon;
@property (nonatomic) AWEURLModel lightIcon;
- (id)lightIcon;
- (id)darkIcon;
- (void)setLightIcon:;
- (void)setDarkIcon:;
- (void).cxx_destruct;
+ (id)darkIconJSONTransformer;
+ (id)lightIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
