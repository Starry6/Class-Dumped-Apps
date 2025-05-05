@interface BMMicroLocationNumDevicesPerTechnology : NSObject
@property (nonatomic) NSString technology;
@property (nonatomic) I numDevices;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)technology;
- (id)proto;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (id)initWithProto:;
- (void).cxx_destruct;
- (unsigned int)numDevices;
- (id)serialize;
- (BOOL)isEqual:;
- (id)initWithTechnology:numDevices:;
+ (id)eventWithData:dataVersion:;
@end
