@interface IESECSKUTaskInfoModel : MTLModel
@property (nonatomic) NSString curSKUID;
@property (nonatomic) NSString curSKUNum;
@property (nonatomic) NSString poiID;
@property (nonatomic) NSNumber installmentCount;
@property (nonatomic) NSString couponID;
@property (nonatomic) NSString orderURL;
@property (nonatomic) IESECBTMModel btmModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)btmModel;
- (id)couponID;
- (id)curSKUID;
- (id)curSKUNum;
- (id)poiID;
- (void)setBtmModel:;
- (void)setCouponID:;
- (void)setCurSKUID:;
- (void)setCurSKUNum:;
- (void)setPoiID:;
- (void).cxx_destruct;
- (id)orderURL;
- (void)setOrderURL:;
- (id)installmentCount;
- (void)setInstallmentCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
