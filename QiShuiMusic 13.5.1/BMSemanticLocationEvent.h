@interface BMSemanticLocationEvent : BMEventBase
@property (nonatomic) Q userSpecificPlaceType;
@property (nonatomic) Q placeType;
@property (nonatomic) BOOL starting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) I dataVersion;
- (unsigned long long)placeType;
- (id)initWithProtoData:;
- (void)setStarting:;
- (id)proto;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (unsigned long long)userSpecificPlaceType;
- (unsigned long long)hash;
- (id)initWithUserSpecificPlaceType:placeType:loiIdentifier:starting:;
- (id)initWithProto:;
- (BOOL)isStarting;
- (id)description;
- (id)serialize;
- (id)initWithUserSpecificPlaceType:placeType:starting:;
- (BOOL)isEqual:;
+ (id)eventWithData:dataVersion:;
@end
