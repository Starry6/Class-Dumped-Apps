@interface AWEECOMIMRatingMsgModel : AWEECOMIMBaseMsgModel
@property (nonatomic) AWEECOMIMRateServiceModel rateServiceModel;
@property (nonatomic) NSDictionary resultDict;
@property (nonatomic) NSString themeTitle;
- (id)rateServiceModel;
- (id)themeTitle;
- (void)updateRateServiceModel;
- (void)setRateServiceModel:;
- (void)setThemeTitle:;
- (void).cxx_destruct;
- (id)initWithMessage:;
- (id)resultDict;
- (void)setResultDict:;
+ (Class)cellClass;
@end
