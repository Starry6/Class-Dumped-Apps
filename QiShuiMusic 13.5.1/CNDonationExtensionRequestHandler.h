@interface CNDonationExtensionRequestHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginRequestWithExtensionContext:;
- (void)renewExpirationDateForDonatedValue:acknowledgementHandler:;
- (void)userDidRejectDonatedValue:;
- (unsigned long long)donationVersioningNumber;
- (void)redonateAllValuesWithReason:;
@end
