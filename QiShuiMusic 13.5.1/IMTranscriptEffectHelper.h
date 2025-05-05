@interface IMTranscriptEffectHelper : NSObject
+ (void)setFeatureEnabled:;
+ (BOOL)isFeatureEnabled;
+ (id)allEffectIdentifiers;
+ (BOOL)identifierIsEffectIdentifier:;
+ (BOOL)effectIdentifierIsFullScreenMoment:;
+ (BOOL)effectIdentifierIsImpactEffect:;
+ (id)identifierNameMap;
+ (id)replayStringMap;
+ (id)sendWithEffectStringMap;
+ (id)findIdentifierByMathcingPartialSufix:;
+ (id)nameForEffectIdentifier:;
+ (id)replayStringForEffectIdentifier:;
+ (id)sendWithStringForEffectIdentifier:;
+ (BOOL)shouldShowReplayButtonForEffectIdentifier:;
@end
