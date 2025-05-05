@interface BMMicroLocationProbabilityPerLabel : NSObject
@property (nonatomic) NSUUID labelIdentifier;
@property (nonatomic) double probability;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)serialize;
- (BOOL)isEqual:;
- (double)probability;
- (id)initWithLabelIdentifier:probability:;
- (id)labelIdentifier;
+ (id)eventWithData:dataVersion:;
@end
