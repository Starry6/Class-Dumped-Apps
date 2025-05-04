@interface AWEInfringementReportInfoModel : AWEBaseApiModel
@property (nonatomic) NSString infringementReportId;
@property (nonatomic) NSString remindText;
@property (nonatomic) NSString detailLink;
@property (nonatomic) q showDaysLimit;
@property (nonatomic) q showDetailCountLimit;
- (void)setShowDaysLimit:;
- (long long)showDaysLimit;
- (id)infringementReportId;
- (id)remindText;
- (long long)showDetailCountLimit;
- (void)setShowDetailCountLimit:;
- (void)setInfringementReportId:;
- (void)setRemindText:;
- (id)detailLink;
- (void)setDetailLink:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
