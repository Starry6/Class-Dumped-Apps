@interface AWEIMInviteInfo : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSArray uidArray;
@property (nonatomic) BOOL isInviteFollower;
@property (nonatomic) NSString groupName;
@property (nonatomic) IESIMURLModel groupIconURL;
@property (nonatomic) NSDictionary ext;
- (void)setExt:;
- (id)groupIconURL;
- (BOOL)isInviteFollower;
- (void)setGroupIconURL:;
- (void)setIsInviteFollower:;
- (void)setUidArray:;
- (id)uidArray;
- (void)setGroupName:;
- (void).cxx_destruct;
- (id)groupName;
- (id)conversationID;
- (void)setConversationID:;
- (id)ext;
@end
