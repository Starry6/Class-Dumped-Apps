@interface AWECodeGenItemPreAccessChargeInfoModel : AWEBaseDataModel
@property (nonatomic) BOOL hasPaid;
@property (nonatomic) NSString brandId;
@property (nonatomic) NSString brandName;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSArray showReportLinkArray;
@property (nonatomic) NSArray clickReportLinkArray;
- (BOOL)hasPaid;
- (void)setHasPaid:;
- (id)showReportLinkArray;
- (id)clickReportLinkArray;
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
