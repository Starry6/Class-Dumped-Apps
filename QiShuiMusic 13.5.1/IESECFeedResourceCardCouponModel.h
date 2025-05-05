@interface IESECFeedResourceCardCouponModel : IESECFeedResourceCardBaseNode
@property (nonatomic) Q style;
@property (nonatomic) q price;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString subDesc;
@property (nonatomic) NSString couponID;
@property (nonatomic) IESECFeedResourceCardCouponLinkInfoModel link;
@property (nonatomic) IESECFeedResourceCardCouponTimeInfoModel timeInfo;
@property (nonatomic) IESECURLModel backgroundImage;
- (id)subDesc;
- (id)couponID;
- (void)setCouponID:;
- (void)setSubDesc:;
- (void)setTimeInfo:;
- (id)timeInfo;
- (id)link;
- (id)desc;
- (void)setLink:;
- (void)setDesc:;
- (void)setStyle:;
- (void)setBackgroundImage:;
- (id)backgroundImage;
- (void).cxx_destruct;
- (long long)price;
- (unsigned long long)style;
- (void)setPrice:;
+ (id)JSONKeyPathsByPropertyKey;
@end
