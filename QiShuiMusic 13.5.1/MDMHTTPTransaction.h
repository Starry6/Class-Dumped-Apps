@interface MDMHTTPTransaction : DMCHTTPTransaction
@property (nonatomic) BOOL isCheckIn;
- (id)initWithURL:data:identity:pinnedCertificates:pinningRevocationCheckRequired:signMessage:isCheckin:isShortTransaction:rmAccountID:;
- (id)initWithURL:identity:pinnedCertificates:pinningRevocationCheckRequired:isShortTransaction:rmAccountID:;
- (BOOL)isCheckIn;
+ (id)unauthorizedByServerError;
+ (id)reauthRequiredMAIDError;
+ (id)reauthRequiredThirdPartyError;
@end
