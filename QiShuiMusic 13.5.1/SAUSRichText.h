@interface SAUSRichText : AceObject
@property (nonatomic) NSString contentAdvisory;
@property (nonatomic) NSString formattedTextDelimiter;
@property (nonatomic) NSArray markupList;
@property (nonatomic) NSArray moreGlyphs;
@property (nonatomic) NSNumber starRating;
@property (nonatomic) NSNumber textMaxlines;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setStarRating:;
- (id)starRating;
- (void)setMoreGlyphs:;
- (void)setContentAdvisory:;
- (id)contentAdvisory;
- (id)moreGlyphs;
- (id)formattedTextDelimiter;
- (void)setFormattedTextDelimiter:;
- (id)markupList;
- (void)setMarkupList:;
- (id)textMaxlines;
- (void)setTextMaxlines:;
+ (id)richText;
+ (id)richTextWithDictionary:context:;
@end
