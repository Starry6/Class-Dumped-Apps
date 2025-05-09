@interface UIMessageActivity : UIActivity
@property (nonatomic) MFMessageComposeViewController messageComposeViewController;
@property (nonatomic) LPLinkMetadata linkMetadata;
@property (nonatomic) <SFPeopleSuggestion> peopleSuggestion;
@property (nonatomic) BOOL ppt_forceImageTypeSupport;
@property (nonatomic) BOOL isContentManaged;
@property (nonatomic) NSString sourceApplicationBundleID;
@property (nonatomic) NSString sessionID;
@property (nonatomic) <SFCollaborationItem> collaborationItem;
@property (nonatomic) BOOL isCollaborative;
@property (nonatomic) <SFCollaborationService> collaborationService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSessionID:;
- (void)_cleanup;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;
- (BOOL)isContentManaged;
- (void)setIsContentManaged:;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)linkMetadata;
- (void)setLinkMetadata:;
- (BOOL)canPerformWithActivityItems:;
- (void)messageComposeViewController:didFinishWithResult:;
- (void)prepareWithActivityItems:;
- (id)messageComposeViewController;
- (void)setMessageComposeViewController:;
- (id)collaborationItem;
- (BOOL)isCollaborative;
- (void)setIsCollaborative:;
- (id)sourceApplicationBundleID;
- (void)setSourceApplicationBundleID:;
- (void)setCollaborationItem:;
- (id)_bundleIdentifierForActivityImageCreation;
- (id)_backgroundPreheatBlock;
- (void)_prepareWithActivityItems:completion:;
- (id)peopleSuggestion;
- (void)setPeopleSuggestion:;
- (BOOL)ppt_forceImageTypeSupport;
- (void)setPpt_forceImageTypeSupport:;
+ (id)applicationBundleID;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
+ (void)_preheatAsyncIfNeeded;
@end
