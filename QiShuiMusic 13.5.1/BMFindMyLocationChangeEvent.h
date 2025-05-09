@interface BMFindMyLocationChangeEvent : BMEventBase
@property (nonatomic) NSString idsHandle;
@property (nonatomic) Q locationChangeType;
@property (nonatomic) q motionActivityState;
@property (nonatomic) NSNumber latitude;
@property (nonatomic) NSNumber longitude;
@property (nonatomic) NSString name;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (void)setName:;
- (id)proto;
- (id)latitude;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (void)setLatitude:;
- (id)initWithProto:;
- (void)setLongitude:;
- (void).cxx_destruct;
- (id)description;
- (id)longitude;
- (id)name;
- (id)serialize;
- (BOOL)isEqual:;
- (id)idsHandle;
- (void)setIdsHandle:;
- (id)initWithIDSHandle:locationChangeType:;
- (id)initWithIDSHandle:locationChangeType:motionActivityState:latitude:longitude:name:;
- (unsigned long long)locationChangeType;
- (void)setLocationChangeType:;
- (long long)motionActivityState;
- (void)setMotionActivityState:;
+ (id)eventWithData:dataVersion:;
@end
