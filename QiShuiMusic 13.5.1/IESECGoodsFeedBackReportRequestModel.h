@interface IESECGoodsFeedBackReportRequestModel : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString reasonID;
@property (nonatomic) NSString promotionID;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPromotionID:;
- (id)enterFrom;
- (id)promotionID;
- (void)setEnterFrom:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (id)reasonID;
- (void)setReasonID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
