@interface SISchemaMultiUserState : SISchemaInstrumentationMessage
@property (nonatomic) NSArray enrolledUsers;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)clearEnrolledUsers;
- (void)deleteEnrolledUsers;
- (void)addEnrolledUsers:;
- (unsigned long long)enrolledUsersCount;
- (id)enrolledUsersAtIndex:;
- (id)enrolledUsers;
- (void)setEnrolledUsers:;
@end
