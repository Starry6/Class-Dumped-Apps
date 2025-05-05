@interface AMSPaymentSetupFeatureVerification : NSObject
@property (nonatomic) NSString identifier;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (void)setIdentifier:;
- (BOOL)isPaymentSetupFeatureSupportedWithError:;
- (id)performPaymentSetupFeatureLookup;
@end
