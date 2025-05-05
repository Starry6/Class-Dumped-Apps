@interface WBSPasswordPatternMatch : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString matchedSubstring;
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) Q endIndex;
@property (nonatomic) double guessesRequired;
@property (nonatomic) NSDictionary userInfo;
- (id)userInfo;
- (unsigned long long)hash;
- (id)range;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)endIndex;
- (BOOL)isEqual:;
- (id)initWithType:matchedSubstring:range:guessesRequired:userInfo:;
- (id)initExhaustiveSearchPatternWithMatchedSubstring:range:;
- (id)compactDescriptionWithMatchedStringColumnWidth:;
- (id)matchedSubstring;
- (double)guessesRequired;
@end
