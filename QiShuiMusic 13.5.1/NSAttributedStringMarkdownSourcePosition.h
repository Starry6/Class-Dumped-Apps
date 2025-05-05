@interface NSAttributedStringMarkdownSourcePosition : NSObject
@property (nonatomic) q startLine;
@property (nonatomic) q startColumn;
@property (nonatomic) q endLine;
@property (nonatomic) q endColumn;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (long long)endLine;
- (id)debugDescription;
- (id)initWithStart:end:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)startOffsets;
- (id)endOffsets;
- (long long)startLine;
- (long long)startColumn;
- (long long)endColumn;
- (id)initWithStartLine:startColumn:endLine:endColumn:;
- (void)setOffsetsFromUTF8:usingCache:;
- (id)rangeInString:;
+ (BOOL)supportsSecureCoding;
+ (id)calculateOffsetsForLine:column:inString:withExistingOffsets:;
@end
