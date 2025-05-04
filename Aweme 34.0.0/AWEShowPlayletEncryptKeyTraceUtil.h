@interface AWEShowPlayletEncryptKeyTraceUtil : NSObject
+ (void)tracePlayletVideoEncryptionSafeGuardWithModel:identifier:apiName:;
+ (void)reportFailPlayletVideoEncryptionWithModel:identifier:apiName:;
+ (long long)isHasEncryptKeyForVideoWithModel:;
+ (void)p_playletVideoEncryptionSafeGuardWithModel:identifier:apiName:traceName:;
+ (BOOL)playletVideoEncryptionSafeGuardABEnable;
+ (id)reasonHasEncryptKeyForVideoWithModel:;
+ (long long)p_isHasEncryptKeyForVideoWithReason:;
@end
