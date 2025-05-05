@interface WBUAutoFillDisplayData : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) NSString valueString;
@property (nonatomic) NSString property;
@property (nonatomic) NSArray fillMatches;
- (id)property;
- (void)setLabel:;
- (id)initWithCoder:;
- (id)label;
- (void)encodeWithCoder:;
- (id)valueString;
- (void).cxx_destruct;
- (id)fillMatches;
- (id)initWithLabel:fillMatches:;
- (id)addressStringForLabel:;
+ (BOOL)supportsSecureCoding;
@end
