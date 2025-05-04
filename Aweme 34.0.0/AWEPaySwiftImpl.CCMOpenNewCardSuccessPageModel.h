@interface AWEPaySwiftImpl.CCMOpenNewCardSuccessPageModel : MTLModel
@property (nonatomic) NSString ccmIcon;
@property (nonatomic) NSString successPageTitle;
@property (nonatomic) NSString successPageSubTitle;
@property (nonatomic) NSArray successPageInfoItems;
@property (nonatomic) _TtC15AWEPaySwiftImpl31CCMOpenSuccessPagePromotionInfo promotionInfo;
- (id)promotionInfo;
- (void)setPromotionInfo:;
- (id)ccmIcon;
- (void)setCcmIcon:;
- (id)successPageTitle;
- (void)setSuccessPageTitle:;
- (id)successPageSubTitle;
- (void)setSuccessPageSubTitle:;
- (id)successPageInfoItems;
- (void)setSuccessPageInfoItems:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)successPageInfoItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
