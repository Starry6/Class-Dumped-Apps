@interface LNNeedsValueResponse : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) LNValue value;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithIdentifier:value:;
- (void).cxx_destruct;
- (id)value;
+ (BOOL)supportsSecureCoding;
@end
