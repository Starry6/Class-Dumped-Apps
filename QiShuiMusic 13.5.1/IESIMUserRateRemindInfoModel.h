@interface IESIMUserRateRemindInfoModel : IESIMBaseApiModel
@property (nonatomic) NSString remindText;
@property (nonatomic) NSString detailLink;
@property (nonatomic) q showDaysLimit;
@property (nonatomic) q showDetailCountLimit;
@property (nonatomic) q rateRecordId;
- (id)detailLink;
- (long long)rateRecordId;
- (id)remindText;
- (void)setDetailLink:;
- (void)setRateRecordId:;
- (void)setRemindText:;
- (void)setShowDaysLimit:;
- (void)setShowDetailCountLimit:;
- (long long)showDaysLimit;
- (long long)showDetailCountLimit;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
