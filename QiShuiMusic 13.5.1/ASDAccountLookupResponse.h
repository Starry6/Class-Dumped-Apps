@interface ASDAccountLookupResponse : ASDRequestResponse
@property (nonatomic) NSNumber accountID;
@property (nonatomic) BOOL askToBuyEnabled;
@property (nonatomic) NSError error;
- (id)init;
- (id)accountID;
- (void)setAccountID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithAccountID:;
- (id)copyWithZone:;
- (BOOL)askToBuyEnabled;
- (void)setAskToBuyEnabled:;
+ (BOOL)supportsSecureCoding;
@end
