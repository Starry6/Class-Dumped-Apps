@interface AFSetAudioSessionActiveContext : NSObject
@property (nonatomic) Q options;
@property (nonatomic) q reason;
@property (nonatomic) AFSpeechRequestOptions speechRequestOptions;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (long long)reason;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithOptions:reason:speechRequestOptions:;
- (id)speechRequestOptions;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
