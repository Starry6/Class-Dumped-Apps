@interface AWESearchMerchandiseBiddingInformation : AWEBaseApiModel
@property (nonatomic) AWESearchMerchandisePicConfig iconUrl;
@property (nonatomic) AWESearchMerchandisePicConfig bgImage;
@property (nonatomic) AWESearchMerchandiseTextConfig text;
@property (nonatomic) AWESearchMerchandiseBackgroundColor bgColor;
@property (nonatomic) q radius;
- (id)iconUrl;
- (void)setIconUrl:;
- (long long)radius;
- (void)setText:;
- (id)text;
- (void)setRadius:;
- (void).cxx_destruct;
- (id)bgColor;
- (void)setBgColor:;
- (id)bgImage;
- (void)setBgImage:;
+ (id)JSONKeyPathsByPropertyKey;
@end
