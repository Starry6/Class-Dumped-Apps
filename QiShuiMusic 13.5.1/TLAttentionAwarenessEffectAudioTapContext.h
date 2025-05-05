@interface TLAttentionAwarenessEffectAudioTapContext : NSObject
@property (nonatomic) TLAttentionAwarenessEffectCoordinator effectCoordinator;
@property (nonatomic) TLAttentionAwarenessEffectProcessor effectProcessor;
@property (nonatomic) NSUUID identifier;
- (id)init;
- (id)identifier;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)effectCoordinator;
- (void)setEffectCoordinator:;
- (id)effectProcessor;
- (void)setEffectProcessor:;
@end
