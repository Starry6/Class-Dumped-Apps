@interface UICollaborationInviteWithLinkActivity : UIActivity
@property (nonatomic) <SFCollaborationItem> collaborationItem;
@property (nonatomic) BOOL isCollaborative;
@property (nonatomic) <SFCollaborationService> collaborationService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityTitle;
- (id)activityType;
- (void).cxx_destruct;
- (id)_activityImage;
- (BOOL)canPerformWithActivityItems:;
- (void)performActivity;
- (void)prepareWithActivityItems:;
- (id)collaborationItem;
- (id)_activitySettingsImage;
- (long long)_defaultSortGroup;
- (void)setCollaborationItem:;
- (BOOL)canPerformWithCollaborationItem:activityItems:;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
@end
