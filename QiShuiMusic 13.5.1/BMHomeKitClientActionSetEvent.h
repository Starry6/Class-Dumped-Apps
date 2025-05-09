@interface BMHomeKitClientActionSetEvent : BMEventBase
@property (nonatomic) NSString actionSetName;
@property (nonatomic) NSString homeName;
@property (nonatomic) BMHomeKitClientBase base;
@property (nonatomic) NSString actionSetUniqueIdentifier;
@property (nonatomic) NSString actionSetType;
@property (nonatomic) NSArray associatedAccessoryUniqueIdentifiers;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (id)encodeAsProto;
- (id)base;
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)actionSetType;
- (id)description;
- (id)serialize;
- (id)actionSetName;
- (BOOL)isEqual:;
- (id)homeName;
- (id)initWithBase:actionSetUniqueIdentifier:actionSetType:associatedAccessoryUniqueIdentifiers:actionSetName:homeName:;
- (id)actionSetUniqueIdentifier;
- (id)associatedAccessoryUniqueIdentifiers;
+ (id)eventWithData:dataVersion:;
@end
