@interface SHSheetActivityItemsResult : NSObject
@property (nonatomic) UIActivity activity;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) NSArray activityItemValues;
@property (nonatomic) NSArray activityItemURLValues;
@property (nonatomic) UISUISecurityContext securityScopedURLs;
@property (nonatomic) NSString initialSocialText;
@property (nonatomic) NSString subject;
@property (nonatomic) NSData suggestedImageData;
- (id)subject;
- (BOOL)isPlaceholder;
- (void)setSubject:;
- (id)activity;
- (void).cxx_destruct;
- (id)securityScopedURLs;
- (id)activityItemValues;
- (id)initWithActivity:activityItemValues:;
- (id)activityItemURLValues;
- (void)setActivityItemURLValues:;
- (void)setSecurityScopedURLs:;
- (id)initialSocialText;
- (void)setInitialSocialText:;
- (id)suggestedImageData;
- (void)setSuggestedImageData:;
@end
