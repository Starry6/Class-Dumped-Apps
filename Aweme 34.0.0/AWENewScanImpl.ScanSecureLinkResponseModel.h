@interface AWENewScanImpl.ScanSecureLinkResponseModel : AWEBaseApiModel
@property (nonatomic) q risk;
@property (nonatomic) BOOL showMidPage;
@property (nonatomic) double cachedDuration;
@property (nonatomic) NSString link;
@property (nonatomic) NSString pageCode;
@property (nonatomic) NSDate expiredDate;
- (BOOL)showMidPage;
- (void)setShowMidPage:;
- (id)pageCode;
- (void)setPageCode:;
- (id)expiredDate;
- (void)setExpiredDate:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)link;
- (id)initWithCoder:;
- (void)setLink:;
- (long long)risk;
- (void)setRisk:;
- (double)cachedDuration;
- (void)setCachedDuration:;
+ (id)JSONKeyPathsByPropertyKey;
@end
