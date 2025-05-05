@interface PRErrorModel : NSObject
@property (nonatomic) BOOL hasCustomReplacementErrorScores;
@property (nonatomic) BOOL hasCustomTranspositionErrorScores;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (double)replacementErrorScoreForIntendedCharacter:actualCharacter:;
- (double)transpositionErrorScoreForIntendedFirstCharacter:intendedSecondCharacter:;
- (id)initWithCustomErrorModel:;
- (double)errorScoreForType:;
- (BOOL)hasCustomReplacementErrorScores;
- (BOOL)hasCustomTranspositionErrorScores;
@end
