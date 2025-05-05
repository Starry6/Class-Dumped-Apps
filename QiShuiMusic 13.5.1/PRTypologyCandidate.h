@interface PRTypologyCandidate : NSObject
- (void)dealloc;
- (id)description;
- (id)initWithString:range:;
- (id)dictionaryRepresentation;
- (void)closeTypologyCandidateWithResult:;
+ (id)openTypologyCandidate:selectedRange:inString:;
@end
