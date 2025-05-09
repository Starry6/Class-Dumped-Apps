@interface AWECouponModel : MTLModel
@property (nonatomic) q couponID;
@property (nonatomic) q activityID;
@property (nonatomic) NSString merchantName;
@property (nonatomic) NSString discountInfo;
@property (nonatomic) NSString condition;
@property (nonatomic) NSString codeID;
@property (nonatomic) NSString code;
@property (nonatomic) AWEURLModel logoImageURL;
@property (nonatomic) AWEURLModel headerImageURL;
@property (nonatomic) NSString validStart;
@property (nonatomic) NSString validEnd;
@property (nonatomic) NSString validText;
@property (nonatomic) Q couponStatus;
@property (nonatomic) BOOL isDefaultHeadImage;
@property (nonatomic) Q couponType;
@property (nonatomic) Q sourceType;
@property (nonatomic) NSString reminder;
@property (nonatomic) NSString validityPeriodText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)discountInfo;
- (void)setDiscountInfo:;
- (unsigned long long)couponType;
- (long long)couponID;
- (void)setCouponID:;
- (id)validStart;
- (void)setValidStart:;
- (id)validEnd;
- (void)setValidEnd:;
- (id)validText;
- (void)setValidText:;
- (unsigned long long)couponStatus;
- (void)setCouponStatus:;
- (BOOL)isDefaultHeadImage;
- (void)setIsDefaultHeadImage:;
- (void)setCouponType:;
- (id)validityPeriodText;
- (void)setValidityPeriodText:;
- (id)couponStatusEventString;
- (void)setSourceType:;
- (unsigned long long)sourceType;
- (id)code;
- (id)condition;
- (void)setCondition:;
- (void)setCode:;
- (void).cxx_destruct;
- (id)merchantName;
- (void)setMerchantName:;
- (long long)activityID;
- (void)setActivityID:;
- (id)logoImageURL;
- (id)sourceString;
- (id)reminder;
- (void)setReminder:;
- (void)setLogoImageURL:;
- (id)headerImageURL;
- (void)setHeaderImageURL:;
- (id)codeID;
- (void)setCodeID:;
+ (id)logoImageURLJSONTransformer;
+ (id)headerImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
