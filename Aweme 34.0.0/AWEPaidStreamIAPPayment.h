@interface AWEPaidStreamIAPPayment : AWEPaidStreamPayment
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)initWithModel:enterFrom:;
- (void)goToPayForPaidAuthItem:paymentType:extraParameters:;
- (void)goToPayForPaidSchema:authItem:paymentType:extraParameters:;
- (void)setModel:;
- (void)setup;
- (id)model;
- (void).cxx_destruct;
@end
