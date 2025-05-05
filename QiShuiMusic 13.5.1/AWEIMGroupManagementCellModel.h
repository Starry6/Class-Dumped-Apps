@interface AWEIMGroupManagementCellModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) AWEIMConversationGroupManagementInfo groupManagementInfo;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
- (id)groupManagementInfo;
- (id)initWithType:conversation:;
- (void)setGroupManagementInfo:;
- (id)desc;
- (void)setDesc:;
- (void)setType:;
- (id)conversation;
- (void)setTitle:;
- (unsigned long long)type;
- (id)title;
- (void).cxx_destruct;
- (void)setConversation:;
@end
