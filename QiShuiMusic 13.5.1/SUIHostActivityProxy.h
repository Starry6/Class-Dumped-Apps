@interface SUIHostActivityProxy : UIActivity
@property (nonatomic) UISUIActivityConfiguration activityConfiguration;
@property (nonatomic) NSUUID hostActivityUUID;
@property (nonatomic) NSString activityTitle;
@property (nonatomic) NSString activityType;
@property (nonatomic) NSString fallbackActivityType;
@property (nonatomic) {CGSize=dd} preferredThumbnailSize;
@property (nonatomic) NSString positionBeforeActivityType;
@property (nonatomic) BOOL activitySupportsPromiseURLs;
@property (nonatomic) q defaultSortGroup;
@property (nonatomic) BOOL appIsDocumentTypeOwner;
@property (nonatomic) UIImage activityImage;
@property (nonatomic) UIImage actionImage;
@property (nonatomic) NSString systemImageName;
@property (nonatomic) NSUUID activityUUID;
- (id)activityTitle;
- (id)activityType;
- (void)setActivityType:;
- (id)systemImageName;
- (id)debugDescription;
- (void)setSystemImageName:;
- (void).cxx_destruct;
- (void)setActivityTitle:;
- (id)activityUUID;
- (id)_thumbnailSize;
- (id)activityImage;
- (id)_systemImageName;
- (void)activityDidFinish:;
- (BOOL)canPerformWithActivityItems:;
- (void)performActivity;
- (id)actionImage;
- (void)setActionImage:;
- (id)_actionImage;
- (void)prepareWithActivityItems:;
- (long long)_defaultSortGroup;
- (id)_activityTypeUsingFallbackActivityTypeIfNecessary;
- (BOOL)_appIsDocumentTypeOwner;
- (BOOL)_activitySupportsPromiseURLs;
- (id)_beforeActivity;
- (void)setActivityImage:;
- (id)initWithAttributesFromActivityConfiguration:;
- (id)activityConfiguration;
- (void)setActivityConfiguration:;
- (id)hostActivityUUID;
- (void)setHostActivityUUID:;
- (id)fallbackActivityType;
- (void)setFallbackActivityType:;
- (id)preferredThumbnailSize;
- (void)setPreferredThumbnailSize:;
- (id)positionBeforeActivityType;
- (void)setPositionBeforeActivityType:;
- (BOOL)activitySupportsPromiseURLs;
- (void)setActivitySupportsPromiseURLs:;
- (long long)defaultSortGroup;
- (void)setDefaultSortGroup:;
- (BOOL)appIsDocumentTypeOwner;
- (void)setAppIsDocumentTypeOwner:;
+ (id)activitiesForConfigurations:;
+ (id)newWithActivityConfiguration:;
+ (Class)activityProxyClassForActivityCategory:;
@end
