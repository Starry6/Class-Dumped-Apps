@interface IMSharedPersona : NSObject
@property (nonatomic) NSString senderID;
@property (nonatomic) NSString suggestedDisplayName;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)senderID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)suggestedDisplayName;
- (id)initWithSenderID:suggestedDisplayName:;
+ (BOOL)supportsSecureCoding;
+ (id)personaFromDictionaryRepresentation:;
@end
