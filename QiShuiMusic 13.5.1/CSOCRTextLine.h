@interface CSOCRTextLine : NSObject
- (void).cxx_destruct;
- (id)description;
- (id)initWithTextBounds:isTitle:;
- (void)addCandidate:confidence:;
- (void)appendToString:;
@end
