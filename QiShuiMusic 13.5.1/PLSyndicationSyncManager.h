@interface PLSyndicationSyncManager : NSObject
@property (nonatomic) <PLSyndicationSyncManagerDelegate> delegate;
- (void)_processSearchableItem:forQueryType:library:;
- (void)syncSyndicationItemsWithStartDate:endDate:queryType:library:completion:;
- (BOOL)_deleteConversationWithSyndicationIdentifiers:library:;
- (id)initWithQueryTypes:savedAssetTypeMask:delegate:;
- (BOOL)_isQueryTypeSupported:;
- (void)_createOrUpdateObjectFromSearchableItem:library:;
- (void)_processZombieItems:library:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)_deleteGuestAssetWithSyndicationIdentifiers:library:;
- (void)_processZombieItem:library:;
- (BOOL)syncSyndicationItemWithUniqueIdentifier:bundleID:queryType:library:error:;
- (BOOL)_canHandleSearchableItem:forQueryType:;
- (void)_updateSyncTokenWithDate:queryType:library:syncTokenIsCurrent:;
+ (void)_recursiveFindStartDateForMessagesSpotlightItemsWithStartDate:endDate:completionHandler:;
+ (void)findStartDateForMessagesSpotlightItemsWithCompletionHandler:;
@end
