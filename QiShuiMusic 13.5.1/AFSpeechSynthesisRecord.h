@interface AFSpeechSynthesisRecord : NSObject
@property (nonatomic) NSString utterance;
@property (nonatomic) Q beginTimestamp;
@property (nonatomic) Q endTimestamp;
- (id)init;
- (unsigned long long)endTimestamp;
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
- (id)utterance;
- (id)initWithUtterance:beginTimestamp:endTimestamp:;
- (unsigned long long)beginTimestamp;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
