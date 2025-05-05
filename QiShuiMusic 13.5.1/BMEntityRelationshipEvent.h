@interface BMEntityRelationshipEvent : NSObject
@property (nonatomic) NSString clientId;
@property (nonatomic) NSString relationship;
@property (nonatomic) BMEntity sourceEntity;
@property (nonatomic) BMEntity targetEntity;
@property (nonatomic) NSDictionary attributes;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)clientId;
- (id)proto;
- (id)relationship;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (id)attributes;
- (id)sourceEntity;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)serialize;
- (BOOL)isEqual:;
- (id)targetEntity;
- (id)initWithClientId:relationship:sourceEntity:targetEntity:attributes:;
- (id)entityFromPBEntity:;
+ (id)eventWithData:dataVersion:;
@end
