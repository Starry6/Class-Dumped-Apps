@interface EKSerializableParticipant : EKSerializableObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSURL url;
@property (nonatomic) q participantRole;
@property (nonatomic) q participantStatus;
@property (nonatomic) q participantType;
- (id)emailAddress;
- (id)url;
- (void)setName:;
- (id)phoneNumber;
- (void)setEmailAddress:;
- (void)setPhoneNumber:;
- (void)setUrl:;
- (id)initWithParticipant:;
- (void).cxx_destruct;
- (id)name;
- (long long)participantType;
- (long long)participantRole;
- (void)setParticipantRole:;
- (long long)participantStatus;
- (void)setParticipantStatus:;
- (void)setParticipantType:;
- (id)createAttendee:;
+ (id)classesForKey;
@end
