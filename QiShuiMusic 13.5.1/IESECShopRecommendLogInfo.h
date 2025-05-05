@interface IESECShopRecommendLogInfo : MTLModel
@property (nonatomic) NSNumber commodityType;
@property (nonatomic) NSString recommendInfo;
@property (nonatomic) NSString requestID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commodityType;
- (id)recommendInfo;
- (void)setCommodityType:;
- (void)setRecommendInfo:;
- (id)requestID;
- (void).cxx_destruct;
- (void)setRequestID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
