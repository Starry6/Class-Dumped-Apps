@interface CJPayStayAlertForOrderModel : NSObject
@property (nonatomic) NSString tradeNo;
@property (nonatomic) NSString skipPwdDowngradeTradeNo;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL hasShow;
@property (nonatomic) NSDictionary userRetainInfo;
- (id)tradeNo;
- (BOOL)hasShow;
- (id)initWithTradeNo:;
- (BOOL)isSkipPwdDowngradeWithTradeNo:;
- (void)setHasShow:;
- (void)setSkipPwdDowngradeTradeNo:;
- (void)setTradeNo:;
- (void)setUserRetainInfo:;
- (BOOL)shouldShowWithIdentifer:;
- (id)skipPwdDowngradeTradeNo;
- (id)userRetainInfo;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)setShouldShow:;
@end
