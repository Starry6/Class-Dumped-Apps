@interface AWESearchVideoBusinessConfigModel : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) AWERiskPreventModel riskPreventModel;
@property (nonatomic) AWESearchAdModel adModel;
@property (nonatomic) NSString correctName;
@property (nonatomic) NSString backtrace;
- (id)adModel;
- (void)setAdModel:;
- (id)riskPreventModel;
- (void)setRiskPreventModel:;
- (id)correctName;
- (void)setCorrectName:;
- (id)backtrace;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setBacktrace:;
+ (id)JSONKeyPathsByPropertyKey;
@end
