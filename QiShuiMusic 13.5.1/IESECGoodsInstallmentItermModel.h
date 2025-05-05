@interface IESECGoodsInstallmentItermModel : IESECBaseApiModel
@property (nonatomic) NSString itemID;
@property (nonatomic) IESECGoodsInstallmentDescModel benefitDesc;
@property (nonatomic) NSString benefitDetail;
@property (nonatomic) NSString benefitService;
@property (nonatomic) NSString topTag;
@property (nonatomic) BOOL shouldShowTopTag;
@property (nonatomic) NSNumber installmentCount;
@property (nonatomic) BOOL subTitleHighlight;
- (void)setBenefitDesc:;
- (id)benefitDesc;
- (id)benefitDetail;
- (id)benefitService;
- (void)setBenefitDetail:;
- (void)setBenefitService:;
- (void)setShouldShowTopTag:;
- (void)setSubTitleHighlight:;
- (void)setTopTag:;
- (BOOL)shouldShowTopTag;
- (BOOL)subTitleHighlight;
- (id)topTag;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
- (id)installmentCount;
- (void)setInstallmentCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
