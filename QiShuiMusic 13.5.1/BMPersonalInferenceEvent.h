@interface BMPersonalInferenceEvent : NSObject
@property (nonatomic) BMPersonalFact fact;
@property (nonatomic) I modelVersion;
@property (nonatomic) NSNumber confidence;
@property (nonatomic) NSArray qualifiers;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)confidence;
- (unsigned int)modelVersion;
- (id)proto;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)serialize;
- (id)fact;
- (id)qualifiers;
- (id)initWithFact:modelVersion:confidence:qualifiers:;
+ (id)eventWithData:dataVersion:;
@end
