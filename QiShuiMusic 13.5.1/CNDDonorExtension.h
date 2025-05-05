@interface CNDDonorExtension : NSObject
@property (nonatomic) NSExtension extension;
@property (nonatomic) <CNDonationExtensionLogger> logger;
- (id)logger;
- (id)initWithExtension:;
- (id)extension;
- (void).cxx_destruct;
- (id)description;
- (void)renewExpirationDateForDonatedValue:acknowledgementHandler:;
- (void)redonateAllValuesWithReason:;
- (id)initWithExtension:logger:;
@end
