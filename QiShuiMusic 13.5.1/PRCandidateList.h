@interface PRCandidateList : NSObject
- (BOOL)isFull;
- (void)dealloc;
- (unsigned long long)maxCount;
- (id)candidates;
- (id)description;
- (unsigned long long)count;
- (void)addCandidate:;
- (id)initWithMaxCount:defaultReplacementRange:customErrorModel:capitalizationDictionaryArray:;
- (void)addCandidateWithWords:replacementRange:errorType:;
- (void)addCandidateWithString:replacementRange:errorType:;
- (void)addCandidateWithString:errorType:;
- (void)addCandidateWithBuffer:encoding:errorType:;
- (void)addCandidateWithBuffer:encoding:transform:errorType:;
- (void)addReplacementCandidateWithBuffer:encoding:transform:intendedCharacter:actualCharacter:;
- (void)addTranspositionCandidateWithBuffer:encoding:transform:intendedFirstCharacter:intendedSecondCharacter:;
- (id)candidateStrings;
- (id)defaultReplacementRange;
- (id)candidateWithString:;
@end
