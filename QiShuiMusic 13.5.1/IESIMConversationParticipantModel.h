@interface IESIMConversationParticipantModel : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) q role;
@property (nonatomic) NSString alias;
- (void)iesim_setAlias:;
- (id)secUserID;
- (void)setSecUserID:;
- (id)userID;
- (id)alias;
- (void)setRole:;
- (void).cxx_destruct;
- (long long)role;
- (void)setAlias:;
- (void)setUserID:;
@end
