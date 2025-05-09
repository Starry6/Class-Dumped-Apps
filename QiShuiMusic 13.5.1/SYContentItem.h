@interface SYContentItem : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray writableTypeIdentifiersForItemProvider;
@property (nonatomic) q previewLoadLevel;
@property (nonatomic) NSUUID itemIdentifier;
@property (nonatomic) NSString displayTitle;
@property (nonatomic) NSString sourceIdentifier;
@property (nonatomic) NSString sourceLastKnownName;
@property (nonatomic) NSString webpageDisplayDomain;
@property (nonatomic) NSUserActivity userActivity;
@property (nonatomic) NSURL itemURL;
@property (nonatomic) NSString activityType;
@property (nonatomic) NSURL activityCanonicalURL;
@property (nonatomic) NSString activityTargetContentIdentifier;
@property (nonatomic) NSString activityPersistentIdentifier;
@property (nonatomic) NSData linkPreviewMetadata;
- (id)initWithData:error:;
- (id)activityType;
- (id)itemIdentifier;
- (id)sourceIdentifier;
- (unsigned long long)hash;
- (id)displayTitle;
- (id)dataRepresentationWithError:;
- (void).cxx_destruct;
- (id)userActivity;
- (id)description;
- (id)loadDataWithTypeIdentifier:forItemProviderCompletionHandler:;
- (id)itemURL;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)linkPreviewMetadata;
- (void)setPreviewLoadLevel:;
- (id)sourceLastKnownName;
- (void)setLinkPreviewMetadata:;
- (long long)previewLoadLevel;
- (id)initWithItemIdentifier:displayTitle:sourceIdentifier:sourceName:itemURL:activityType:activityCanonicalURL:activityTargetContentIdentifier:activityPersistentIdentifier:userActivity:;
- (id)initWithUserActivity:sourceAppID:sourceAppName:identifier:;
- (id)initWithDisplayTitle:sourceIdentifier:sourceName:itemURL:identifier:;
- (id)initWithUserActivity:sourceAppID:;
- (id)initWithUserActivity:sourceAppID:sourceAppName:;
- (id)initWithDisplayTitle:sourceIdentifier:sourceName:itemURL:;
- (id)webpageDisplayDomain;
- (void)setLinkPreviewMetadata:loadLevel:;
- (void)loadFullPreviewIfNeeded;
- (void)loadFullPreviewIfNeededWithCompletion:;
- (BOOL)representsSameContentAsItem:;
- (id)searchableItemLinkingRelatedIdentifier:domainIdentifier:;
- (id)activityCanonicalURL;
- (id)activityTargetContentIdentifier;
- (id)activityPersistentIdentifier;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:typeIdentifier:error:;
@end
