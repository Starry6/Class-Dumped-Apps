@interface TISmartPunctuationOptions : NSObject
@property (nonatomic) NSString leftSingleQuote;
@property (nonatomic) NSString rightSingleQuote;
@property (nonatomic) NSString apostrophe;
@property (nonatomic) NSString leftDoubleQuote;
@property (nonatomic) NSString rightDoubleQuote;
@property (nonatomic) NSLocale locale;
- (id)rightDoubleQuote;
- (id)rightSingleQuote;
- (id)leftSingleQuote;
- (id)apostrophe;
- (id)locale;
- (void)setApostrophe:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setRightDoubleQuote:;
- (void)encodeWithCoder:;
- (id)leftDoubleQuote;
- (void).cxx_destruct;
- (void)setRightSingleQuote:;
- (void)_generateDataFromLocale;
- (void)setLeftDoubleQuote:;
- (void)setLeftSingleQuote:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithLocale:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)smartPunctuationOptionsForLocale:;
@end
