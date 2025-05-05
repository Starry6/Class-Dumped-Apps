@interface AFPowerContextPolicy : NSObject
@property (nonatomic) {AFPowerContext=QQQ} asrAssistantPolicy;
@property (nonatomic) {AFPowerContext=QQQ} asrDictationPolicy;
@property (nonatomic) {AFPowerContext=QQQ} ttsPolicy;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAsrAssistantPolicy:asrDictationPolicy:ttsPolicy:;
- (id)initWithEncodedPolicy:;
- (unsigned long long)encodePolicy;
- (id)asrAssistantPolicy;
- (id)asrDictationPolicy;
- (id)ttsPolicy;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)encodePowerContext:;
+ (id)decodePowerContext:;
@end
