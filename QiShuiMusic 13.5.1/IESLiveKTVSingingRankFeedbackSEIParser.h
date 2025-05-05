@interface IESLiveKTVSingingRankFeedbackSEIParser : IESLiveBaseKTVSEIParser
- (unsigned long long)seiType;
- (BOOL)checkTypeConditionWithMetaSEI:;
- (id)customizeIndexKeyWithMetaSEI:;
- (id)seiRootKey;
+ (void)ieslivekit_register_sei_parser;
@end
