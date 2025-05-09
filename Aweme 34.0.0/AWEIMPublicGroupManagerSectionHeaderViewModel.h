@interface AWEIMPublicGroupManagerSectionHeaderViewModel : NSObject
@property (nonatomic) BOOL editButtonHidden;
@property (nonatomic) BOOL editButtonSelected;
@property (nonatomic) NSString title;
@property (nonatomic) {CGSize=dd} viewSize;
@property (nonatomic) q section;
@property (nonatomic) AWEIMFansGroupMasterStateViewModel mainViewModel;
@property (nonatomic) AWEIMPublicGroupManagerPageEditViewModel pageEditViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeKVO;
- (void)addKVO;
- (id)pageEditViewModel;
- (BOOL)editButtonHidden;
- (BOOL)editButtonSelected;
- (void)setEditButtonSelected:;
- (void)setEditButtonHidden:;
- (id)initWithSectionType:mainViewModel:;
- (void)setPageEditViewModel:;
- (id)mainViewModel;
- (void)setMainViewModel:;
- (void)setSection:;
- (id)viewSize;
- (long long)section;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setViewSize:;
@end
