@interface WBSParsecFormattedText : WBSParsecModel
@property (nonatomic) NSString text;
@property (nonatomic) BOOL emphasized;
@property (nonatomic) WBSParsecImageRepresentation glyphRepresentation;
@property (nonatomic) NSNumber spaceBeforeInPoints;
@property (nonatomic) NSNumber spaceAfterInPoints;
- (BOOL)isEmphasized;
- (id)initWithDictionary:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)text;
- (BOOL)isEqual:;
- (id)glyphWithSession:;
- (id)glyphRepresentation;
- (id)spaceBeforeInPoints;
- (id)spaceAfterInPoints;
+ (id)schema;
@end
