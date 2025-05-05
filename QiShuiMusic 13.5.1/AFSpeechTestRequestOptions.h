@interface AFSpeechTestRequestOptions : NSObject
@property (nonatomic) NSArray jitContext;
@property (nonatomic) NSString overrideModelPath;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithJitContext:overrideModelPath:;
- (id)jitContext;
- (id)overrideModelPath;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
