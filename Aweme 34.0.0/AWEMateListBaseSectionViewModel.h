@interface AWEMateListBaseSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) q sectionType;
@property (nonatomic) AWESocialRelationObserver mateObserver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishHideMyPostFromUser:status:;
- (void)didFinishShowMyPostToUser:status:;
- (void)didFinishHidePostFromHer:status:;
- (void)didFinishUnHidePostFromHer:status:;
- (void)didFinishCloseFriendsWithUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (void)setupViewModel;
- (void)didChangePrivateRelationWithUser:relationType:relationValue:;
- (void)enterUserProfile:;
- (void)setMateObserver:;
- (id)mateObserver;
- (void)updateSectionData:;
- (void)trackEnterUserProfile:;
- (void)dealloc;
- (long long)sectionType;
- (void)setSectionType:;
- (void).cxx_destruct;
@end
