@interface AWEIMGroupSpeakPermissionCellModel : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString reuseIdentifier;
@property (nonatomic) NSObject bizData;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) double cellHeight;
- (id)bizData;
- (id)initWithIdentifier:reuseIdentifier:conversation:bizData:;
- (unsigned long long)hash;
- (id)identifier;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)reuseIdentifier;
- (id)conversation;
- (double)cellHeight;
- (void)setCellHeight:;
@end
