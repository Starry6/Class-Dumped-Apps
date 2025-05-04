@interface AWEIMOriginTranscodeStrategy : AWEIMBaseTranscodeStrategy
- (double)p_remuxBitrateLimit;
- (BOOL)p_getForceTranscodeWithSize:;
- (void)transAVAsset:processCallback:dataCallback:complete:;
@end
