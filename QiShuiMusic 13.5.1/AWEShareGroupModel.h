@interface AWEShareGroupModel : NSObject
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSString groupName;
@property (nonatomic) IESIMURLModel groupIconURL;
@property (nonatomic) NSString inviterUid;
@property (nonatomic) NSString inviterSecUid;
@property (nonatomic) BOOL shouldNotShowOnCurrentScreen;
@property (nonatomic) @? groupCommandBlock;
- (id)groupCommandBlock;
- (id)groupIconURL;
- (id)inviterSecUid;
- (id)inviterUid;
- (void)setGroupCommandBlock:;
- (void)setGroupIconURL:;
- (void)setInviterSecUid:;
- (void)setInviterUid:;
- (void)setShouldNotShowOnCurrentScreen:;
- (BOOL)shouldNotShowOnCurrentScreen;
- (void)setGroupName:;
- (void).cxx_destruct;
- (id)groupName;
- (id)conversationId;
- (void)setConversationId:;
@end
