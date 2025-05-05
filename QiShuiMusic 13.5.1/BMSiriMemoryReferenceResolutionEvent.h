@interface BMSiriMemoryReferenceResolutionEvent : NSObject
@property (nonatomic) NSString version;
@property (nonatomic) NSDictionary entitiesByEntityID;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (id)version;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)serialize;
- (BOOL)isEqual:;
- (id)initWithVersion:entityDict:;
- (id)entitiesByEntityID;
+ (id)eventWithData:dataVersion:;
@end
