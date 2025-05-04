@interface AWEMateListSimpleSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) BOOL isLastItem;
@property (nonatomic) NSString sectionTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishCloseFriendsWithUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (void)setupViewModel;
- (void)enterUserProfile:;
- (void)trackEnterUserProfile:;
- (void)updateSectionData:isLastItem:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)sectionTitle;
- (BOOL)isLastItem;
- (void)setIsLastItem:;
- (void)setSectionTitle:;
@end
