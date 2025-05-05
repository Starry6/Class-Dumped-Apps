@interface BMUserStatusChangeEvent : BMEventBase
@property (nonatomic) NSString idsHandle;
@property (nonatomic) NSString statusChangeType;
@property (nonatomic) NSArray idsHandles;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (BOOL)isEqual:;
- (id)idsHandles;
- (void)setIdsHandles:;
- (id)idsHandle;
- (void)setIdsHandle:;
- (id)initWithIDSHandle:statusChangeType:;
- (id)initWithIDSHandles:statusChangeType:;
- (id)statusChangeType;
- (void)setStatusChangeType:;
+ (id)eventWithData:dataVersion:;
@end
