@interface AWEEcommerceGuideSearchV2SalesInfoModel : MTLModel
@property (nonatomic) NSArray avatarImages;
@property (nonatomic) q amount;
@property (nonatomic) NSString suffixText;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString borderColor;
@property (nonatomic) AWEEcommerceGuideSearchV2GradientModel backgroundGradientColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatarImages;
- (void)setAvatarImages:;
- (void)setBorderColor:;
- (id)borderColor;
- (id)suffixText;
- (void)setTextColor:;
- (id)backgroundGradientColor;
- (void)setBackgroundGradientColor:;
- (void).cxx_destruct;
- (void)setSuffixText:;
- (id)textColor;
- (long long)amount;
- (void)setAmount:;
+ (id)backgroundGradientColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
