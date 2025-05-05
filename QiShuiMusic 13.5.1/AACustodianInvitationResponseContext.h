@interface AACustodianInvitationResponseContext : NSObject
@property (nonatomic) NSUUID custodianID;
@property (nonatomic) BOOL accepted;
@property (nonatomic) BOOL autoAction;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setAccepted:;
- (id)custodianID;
- (id)initWithCustodianID:didAccept:;
- (void)setCustodianID:;
- (BOOL)isAccepted;
- (BOOL)isAutoAction;
- (void)setAutoAction:;
+ (BOOL)supportsSecureCoding;
@end
