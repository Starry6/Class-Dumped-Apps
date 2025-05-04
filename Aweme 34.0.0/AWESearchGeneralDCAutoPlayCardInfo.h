@interface AWESearchGeneralDCAutoPlayCardInfo : NSObject
@property (nonatomic) <AWEMSearchAutoPlayCard> card;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} realRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} activeRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} inactiveRect;
@property (nonatomic) q colume;
@property (nonatomic) AWESearchGeneralDCAutoPlayCalculator calculator;
- (void)setCalculator:;
- (id)calculator;
- (long long)colume;
- (id)realRect;
- (void)setRealRect:;
- (void)setColume:;
- (id)card;
- (void)setCard:;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)inactiveRect;
- (void)setInactiveRect:;
- (id)activeRect;
- (void)setActiveRect:;
@end
