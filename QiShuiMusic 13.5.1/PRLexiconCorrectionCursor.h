@interface PRLexiconCorrectionCursor : NSObject
@property (nonatomic) ^{_LXCursor=} cursor;
@property (nonatomic) Q replacementsCount;
@property (nonatomic) Q insertionsCount;
@property (nonatomic) Q deletionsCount;
@property (nonatomic) Q transpositionsCount;
@property (nonatomic) Q advancementLength;
@property (nonatomic) Q totalEdits;
@property (nonatomic) double prefixProbability;
@property (nonatomic) Q errorType;
- (id)cursor;
- (void)dealloc;
- (id)description;
- (unsigned long long)errorType;
- (double)prefixProbability;
- (id)initWithCursor:replacementsCount:insertionsCount:deletionsCount:transpositionsCount:advancementLength:;
- (unsigned long long)totalEdits;
- (unsigned long long)replacementsCount;
- (unsigned long long)insertionsCount;
- (unsigned long long)deletionsCount;
- (unsigned long long)transpositionsCount;
- (unsigned long long)advancementLength;
@end
