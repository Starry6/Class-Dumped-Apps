@interface IMSharedEmergencyInfo : NSObject
@property (nonatomic) IMSharedPersona emergencyUserPersona;
@property (nonatomic) IMSharedPersona senderPersona;
@property (nonatomic) NSString conversationID;
@property (nonatomic) q messageType;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (long long)messageType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)conversationID;
- (id)copyWithZone:;
- (id)initWithStewieUserPersona:stewieUserPersona:conversationID:messageType:;
- (id)emergencyUserPersona;
- (id)senderPersona;
+ (BOOL)supportsSecureCoding;
+ (id)infoFromDictionary:isStewieTranscriptSharingMessage:;
@end
