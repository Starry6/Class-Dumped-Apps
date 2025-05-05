@interface AFSetAudioSessionActiveResult : NSObject
@property (nonatomic) I audioSessionID;
@property (nonatomic) NSError error;
- (unsigned int)audioSessionID;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)error;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAudioSessionID:error:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
