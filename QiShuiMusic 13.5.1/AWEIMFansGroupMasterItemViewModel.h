@interface AWEIMFansGroupMasterItemViewModel : IESIMBaseApiModel
@property (nonatomic) NSString groupMemberDesc;
@property (nonatomic) NSString entryLimitDesc;
@property (nonatomic) {CGSize=dd} cellSize;
@property (nonatomic) double labelMaxW;
@property (nonatomic) AWEIMFansGroupModel model;
@property (nonatomic) <IESIMConversationProtocol> con;
- (id)con;
- (id)groupMemberDesc;
- (void)setCon:;
- (void)__addGroupKVO;
- (id)__sizeWithString:font:;
- (void)__updateGroupMemberDesc;
- (id)entryLimitDesc;
- (double)labelMaxW;
- (void)rebindConversation;
- (void)setEntryLimitDesc:;
- (void)setGroupMemberDesc:;
- (void)setLabelMaxW:;
- (id)model;
- (void)setModel:;
- (id)initWithModel:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)cellSize;
- (void)setCellSize:;
@end
