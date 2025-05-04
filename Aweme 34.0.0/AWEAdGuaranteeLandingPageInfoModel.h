@interface AWEAdGuaranteeLandingPageInfoModel : MTLModel
@property (nonatomic) AWEAdGuaranteeInfoTagImageModel tagImageUrlModel;
@property (nonatomic) NSString descriptionInfo;
@property (nonatomic) NSString guaranteeUrlString;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guaranteeUrlString;
- (id)tagImageUrlModel;
- (id)descriptionInfo;
- (void)setDescriptionInfo:;
- (void)setTagImageUrlModel:;
- (void)setGuaranteeUrlString:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
