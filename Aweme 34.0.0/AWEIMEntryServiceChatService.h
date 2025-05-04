@interface AWEIMEntryServiceChatService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serviceBRoleIDsWhiteList;
- (id)serviceCRoleIDsWhiteList;
- (id)serviceAllRoleIDsWhiteList;
- (BOOL)isServiceBussinessRole:;
- (BOOL)isServiceBussinessRoleIDs:;
- (BOOL)isCServiceChatRole:;
- (BOOL)isCServiceChatRoleWithRoleIds:;
@end
