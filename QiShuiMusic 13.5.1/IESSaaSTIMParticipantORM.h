@interface IESSaaSTIMParticipantORM : IESSaaSTIMBaseORM
@property (nonatomic) q userID;
@property (nonatomic) NSString belongingConversationIdentifier;
@property (nonatomic) q sortOrder;
@property (nonatomic) q role;
@property (nonatomic) NSString alias;
@property (nonatomic) NSString secUserID;
@property (nonatomic) q silentStatus;
@property (nonatomic) q silentTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)belongingConversationIdentifier;
- (id)secUserID;
- (void)setBelongingConversationIdentifier:;
- (void)setSecUserID:;
- (void)setSilentStatus:;
- (void)setSilentTime:;
- (long long)silentStatus;
- (long long)silentTime;
- (long long)sortOrder;
- (long long)userID;
- (void)setSortOrder:;
- (id)alias;
- (void)setRole:;
- (void).cxx_destruct;
- (long long)role;
- (void)setAlias:;
- (void)setUserID:;
+ (id)belongingConversationIdentifier;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)objectRelationalMappingForWCDB;
+ (id)secUserID;
+ (id)silentStatus;
+ (id)silentTime;
+ (id)sortOrder;
+ (id)userID;
+ (id)alias;
+ (id)role;
@end
