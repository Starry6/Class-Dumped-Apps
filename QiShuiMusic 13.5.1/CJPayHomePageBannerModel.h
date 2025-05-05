@interface CJPayHomePageBannerModel : CJPayChannelModel
@property (nonatomic) NSString bannerText;
@property (nonatomic) NSString btnText;
@property (nonatomic) NSString btnAction;
- (id)btnText;
- (id)buildShowConfig;
- (id)btnAction;
- (void)setBtnAction:;
- (void)setBtnText:;
- (void).cxx_destruct;
- (id)bannerText;
- (void)setBannerText:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
