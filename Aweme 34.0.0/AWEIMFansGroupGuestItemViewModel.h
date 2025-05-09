@interface AWEIMFansGroupGuestItemViewModel : NSObject
@property (nonatomic) NSString groupMemberDesc;
@property (nonatomic) NSString entryLimitDesc;
@property (nonatomic) NSString infoDesc;
@property (nonatomic) NSString joinButtonTitle;
@property (nonatomic) BOOL joinButtonEnable;
@property (nonatomic) {CGSize=dd} cellSize;
@property (nonatomic) double labelTopMargin;
@property (nonatomic) NSArray groupTags;
@property (nonatomic) AWEIMFansGroupModel model;
- (id)groupMemberDesc;
- (id)infoDesc;
- (id)joinButtonTitle;
- (BOOL)joinButtonEnable;
- (double)labelTopMargin;
- (id)entryLimitDesc;
- (id)groupTags;
- (void)setGroupMemberDesc:;
- (void)setEntryLimitDesc:;
- (void)setInfoDesc:;
- (void)setLabelTopMargin:;
- (void)setJoinButtonTitle:;
- (void)setJoinButtonEnable:;
- (void)setGroupTags:;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (id)cellSize;
- (void)setCellSize:;
@end
