@interface LNConfirmationResponse : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) BOOL confirmed;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isConfirmed;
- (id)initWithIdentifier:confirmed:;
+ (BOOL)supportsSecureCoding;
@end
