@interface LNActionConfirmationResponse : NSObject
@property (nonatomic) NSUUID identifier;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
