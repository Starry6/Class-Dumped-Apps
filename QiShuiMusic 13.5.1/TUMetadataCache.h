@interface TUMetadataCache : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSArray providers;
@property (nonatomic) BOOL empty;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isEmpty;
- (void)dataProvider:requestedRefreshWithDestinationIDs:;
- (id)providers;
- (void)updateCacheForEmptyDataProvidersWithDestinationIDs:;
- (void)_updateCacheWithDestinationIDs:onlyEmptyProviders:;
- (id)initWithDataProviders:;
- (void).cxx_destruct;
- (id)metadataForDestinationID:;
- (id)description;
- (void)updateCacheWithDestinationIDs:;
- (id)queue;
- (id)initWithQueue:dataProviders:;
+ (id)classIdentifier;
@end
