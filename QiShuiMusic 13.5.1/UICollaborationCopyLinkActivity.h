@interface UICollaborationCopyLinkActivity : UIActivity
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
- (id)activityViewController;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:;
- (void)performActivity;
- (id)collaborationItem;
- (long long)_defaultSortGroup;
- (void)setCollaborationItem:;
- (BOOL)canPerformWithCollaborationItem:activityItems:;
- (id)collaborationService;
- (void)setCollaborationService:;
- (void)_prepareWithActivityItems:completion:;
- (BOOL)_activitySupportsPromiseURLs;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
@end
