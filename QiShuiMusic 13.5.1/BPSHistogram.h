@interface BPSHistogram : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)_setKeyTypeFromKey:;
- (BOOL)_correctKeyType:;
- (id)scoreForKey:;
- (void)addScore:forKey:;
- (void)removeScoreForKey:;
- (id)allKeysAtLevel:;
- (void)removeAllScores;
- (void)enumerateKeysAndScoresUsingBlock:;
- (void)_enumerateWithBlock:node:currentKey:stop:;
@end
