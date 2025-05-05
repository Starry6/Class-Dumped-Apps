@interface WBSParsecRichText : WBSParsecModel
@property (nonatomic) NSString text;
@property (nonatomic) NSNumber maximumLines;
@property (nonatomic) NSArray formattedTextList;
@property (nonatomic) NSArray moreGlyphRepresentations;
@property (nonatomic) NSString contentAdvisoryString;
- (id)initWithDictionary:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)text;
- (BOOL)isEqual:;
- (id)maximumLines;
- (id)contentAdvisoryImageWithSession:;
- (id)moreGlyphsWithSession:;
- (id)formattedTextList;
- (id)moreGlyphRepresentations;
- (id)contentAdvisoryString;
+ (id)schema;
@end
