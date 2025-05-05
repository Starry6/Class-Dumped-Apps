@interface IESIMInfringementReportInfoModel : IESIMBaseApiModel
@property (nonatomic) NSString infringementReportId;
@property (nonatomic) NSString remindText;
@property (nonatomic) NSString detailLink;
@property (nonatomic) q showDaysLimit;
@property (nonatomic) q showDetailCountLimit;
- (id)detailLink;
- (id)infringementReportId;
- (id)remindText;
- (void)setDetailLink:;
- (void)setInfringementReportId:;
- (void)setRemindText:;
- (void)setShowDaysLimit:;
- (void)setShowDetailCountLimit:;
- (long long)showDaysLimit;
- (long long)showDetailCountLimit;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
