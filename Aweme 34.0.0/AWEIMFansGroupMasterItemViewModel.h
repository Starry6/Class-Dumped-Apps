@interface AWEIMFansGroupMasterItemViewModel : IESIMBaseApiModel
@property (nonatomic) NSString groupMemberDesc;
@property (nonatomic) NSString entryLimitDesc;
@property (nonatomic) NSString infoDesc;
@property (nonatomic) {CGSize=dd} cellSize;
@property (nonatomic) double labelMaxW;
@property (nonatomic) double labelTopMargin;
@property (nonatomic) BOOL dragIndicatorViewHidden;
@property (nonatomic) BOOL displayStateButtonHidden;
@property (nonatomic) BOOL displayStateButtonSelected;
@property (nonatomic) AWEIMFansGroupModel model;
@property (nonatomic) <IESIMConversationProtocol> con;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) BOOL disableGroupStateButton;
@property (nonatomic) AWEIMPublicGroupManagerPageEditViewModel pageEditViewModel;
- (id)con;
- (void)setCon:;
- (void)removeKVO;
- (void)addKVO;
- (void)calculateLayoutInfo;
- (id)groupMemberDesc;
- (id)infoDesc;
- (double)labelTopMargin;
- (id)entryLimitDesc;
- (void)setGroupMemberDesc:;
- (void)setEntryLimitDesc:;
- (void)setInfoDesc:;
- (void)setLabelTopMargin:;
- (BOOL)disableGroupStateButton;
- (BOOL)dragIndicatorViewHidden;
- (BOOL)displayStateButtonHidden;
- (BOOL)displayStateButtonSelected;
- (id)pageEditViewModel;
- (void)rebindConversation;
- (void)setDisableGroupStateButton:;
- (void)__addGroupKVO;
- (id)__textLayoutWithText:font:maxRowCount:;
- (void)setLabelMaxW:;
- (void)__refreshDragIndicatorHidden;
- (void)setDisplayStateButtonHidden:;
- (void)setDisplayStateButtonSelected:;
- (void)setDragIndicatorViewHidden:;
- (id)initWithModel:pageEditViewModel:;
- (double)labelMaxW;
- (void)setModel:;
- (unsigned long long)hash;
- (id)model;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)conversation;
- (id)cellSize;
- (void)setConversation:;
- (void)setCellSize:;
@end
