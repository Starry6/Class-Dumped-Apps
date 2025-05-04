@interface AWECodeGenEntPreAccessDataModel : AWEBaseDataModel
@property (nonatomic) NSInteger chargeCount;
@property (nonatomic) NSArray chargeEpisodesArray;
@property (nonatomic) NSString brandId;
@property (nonatomic) NSString brandName;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSArray showReportLinkArray;
@property (nonatomic) NSArray clickReportLinkArray;
- (int)chargeCount;
- (void)setChargeCount:;
- (id)chargeEpisodesArray;
- (id)showReportLinkArray;
- (id)clickReportLinkArray;
- (void)setChargeEpisodesArray:;
- (void)setShowReportLinkArray:;
- (void)setClickReportLinkArray:;
- (void)setStartTime:;
- (long long)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (id)brandName;
- (long long)startTime;
- (void)setBrandName:;
- (id)brandId;
- (void)setBrandId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
