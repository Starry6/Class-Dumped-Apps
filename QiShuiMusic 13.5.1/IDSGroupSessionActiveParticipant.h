@interface IDSGroupSessionActiveParticipant : NSObject
@property (nonatomic) NSUUID groupUUID;
@property (nonatomic) Q participantIdentifier;
@property (nonatomic) BOOL isKnown;
@property (nonatomic) NSString participantURI;
@property (nonatomic) NSData participantPushToken;
- (id)groupUUID;
- (unsigned long long)participantIdentifier;
- (BOOL)isKnown;
- (id)debugDescription;
- (id)initWithDictionaryRepresentation:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithGroupUUID:participantIdentifier:isKnown:participantURI:pushToken:;
- (id)participantURI;
- (id)participantPushToken;
@end
