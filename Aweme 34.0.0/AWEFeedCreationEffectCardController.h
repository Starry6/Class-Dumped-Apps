@interface AWEFeedCreationEffectCardController : AWEFeedCreationCardMigrationBaseController
@property (nonatomic) BOOL hasShowed;
- (BOOL)hasShowed;
- (void)setHasShowed:;
- (void)preloadResourcesIfNeededWithAweme:;
- (BOOL)basicConditionsInvalid;
+ (id)businessID;
@end
