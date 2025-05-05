@interface NSSmartQuoteOptions : NSObject
@property (nonatomic) NSString leftSingleQuote;
@property (nonatomic) NSString rightSingleQuote;
@property (nonatomic) NSString apostrophe;
@property (nonatomic) NSString leftDoubleQuote;
@property (nonatomic) NSString rightDoubleQuote;
- (id)rightDoubleQuote;
- (void)dealloc;
- (id)rightSingleQuote;
- (id)leftSingleQuote;
- (id)apostrophe;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)leftDoubleQuote;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithLeftSingleQuote:rightSingleQuote:apostrophe:leftDoubleQuote:rightDoubleQuote:;
+ (BOOL)supportsSecureCoding;
+ (id)smartQuoteOptionsForLocale:;
@end
