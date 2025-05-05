@interface IESLiveKTVScoreSEIParser : IESLiveBaseKTVSEIParser
- (unsigned long long)seiType;
- (id)seiRootKey;
+ (void)ieslivekit_register_sei_parser;
@end
