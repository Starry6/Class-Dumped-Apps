@interface NSTextAlternatives : NSObject
@property (nonatomic) BOOL isLowConfidence;
@property (nonatomic) NSString primaryString;
@property (nonatomic) NSArray alternativeStrings;
- (id)alternatives;
- (void)dealloc;
- (id)identifier;
- (id)alternativeAtIndex:;
- (id)initWithCoder:;
- (id)originalText;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)alternativeStrings;
- (id)primaryString;
- (id)initWithPrimaryString:alternativeStrings:isLowConfidence:;
- (id)initWithPrimaryString:alternativeStrings:;
- (BOOL)isLowConfidence;
- (id)initWithPrimaryString:alternativeStrings:identifier:;
- (id)initWithPrimaryString:alternativeStrings:identifier:isLowConfidence:;
- (id)initWithOriginalText:alternatives:;
- (id)initWithOriginalText:alternatives:identifier:;
- (void)noteSelectedAlternativeString:;
- (unsigned long long)numberOfAlternatives;
- (void)setIsLowConfidence:;
+ (id)attributedText:withAlternativeTexts:;
+ (id)attributedText:withAlternativeTexts:style:;
+ (BOOL)supportsSecureCoding;
@end
