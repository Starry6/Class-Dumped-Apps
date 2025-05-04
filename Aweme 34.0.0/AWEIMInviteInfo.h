@interface AWEIMInviteInfo : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSArray uidArray;
@property (nonatomic) BOOL isInviteFollower;
@property (nonatomic) NSString groupName;
@property (nonatomic) AWEURLModel groupIconURL;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary ext;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setExt:;
- (void)setGroupIconURL:;
- (id)groupIconURL;
- (void)setUidArray:;
- (id)uidArray;
- (BOOL)isInviteFollower;
- (void)setIsInviteFollower:;
- (void)setGroupName:;
- (id)conversationID;
- (id)groupName;
- (void).cxx_destruct;
- (void)setConversationID:;
- (id)ext;
@end
