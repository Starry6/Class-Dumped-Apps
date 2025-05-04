@interface AWEUserRateRemindInfoModel : AWEBaseApiModel
@property (nonatomic) NSString remindText;
@property (nonatomic) NSString detailLink;
@property (nonatomic) q showDaysLimit;
@property (nonatomic) q showDetailCountLimit;
@property (nonatomic) q rateRecordId;
- (void)setShowDaysLimit:;
- (long long)showDaysLimit;
- (id)remindText;
- (long long)showDetailCountLimit;
- (void)setShowDetailCountLimit:;
- (void)setRemindText:;
- (id)detailLink;
- (void)setRateRecordId:;
- (long long)rateRecordId;
- (void)setDetailLink:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
