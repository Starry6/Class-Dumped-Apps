@interface AFSpeechInfo : NSObject
@property (nonatomic) SASSpeechRecognized speechRecognizedCommand;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSpeechRecognizedCommand:;
- (id)speechRecognizedCommand;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
