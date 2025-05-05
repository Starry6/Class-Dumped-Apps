@interface LNDisambiguationResponse : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) q selectedItemIndex;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)selectedItemIndex;
- (id)initWithIdentifier:selectedItemIndex:;
+ (BOOL)supportsSecureCoding;
@end
