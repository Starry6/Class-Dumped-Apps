@interface AWEIMFansGroupGuestItemViewModel : NSObject
@property (nonatomic) NSString groupMemberDesc;
@property (nonatomic) NSString entryLimitDesc;
@property (nonatomic) NSString joinButtonTitle;
@property (nonatomic) BOOL joinButtonEnable;
@property (nonatomic) {CGSize=dd} cellSize;
@property (nonatomic) BOOL isLimitLabelOneLine;
@property (nonatomic) AWEIMFansGroupModel model;
- (id)groupMemberDesc;
- (id)joinButtonTitle;
- (id)entryLimitDesc;
- (BOOL)isLimitLabelOneLine;
- (BOOL)joinButtonEnable;
- (void)setEntryLimitDesc:;
- (void)setGroupMemberDesc:;
- (void)setIsLimitLabelOneLine:;
- (void)setJoinButtonEnable:;
- (void)setJoinButtonTitle:;
- (id)model;
- (void)setModel:;
- (id)initWithModel:;
- (void).cxx_destruct;
- (id)cellSize;
- (void)setCellSize:;
@end
