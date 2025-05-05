@interface AWEIMGroupMemberListModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString title;
@property (nonatomic) IESIMConversationParticipantModel participant;
@property (nonatomic) IESIMSaaSAWEIMUser imUser;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) AWEIMGroupMessageActivePeerViewModel peerVM;
- (id)imUser;
- (id)peerVM;
- (void)setImUser:;
- (void)setPeerVM:;
- (void)setType:;
- (void)setTitle:;
- (BOOL)isSelected;
- (void)setParticipant:;
- (unsigned long long)type;
- (id)title;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (id)participant;
@end
