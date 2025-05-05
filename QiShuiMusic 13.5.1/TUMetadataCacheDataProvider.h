@interface TUMetadataCacheDataProvider : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableDictionary providerCache;
@property (nonatomic) <TUMetadataCacheDataProviderDelegate> delegate;
@property (nonatomic) BOOL empty;
- (void)refresh;
- (id)init;
- (BOOL)isEmpty;
- (void)updateCacheWithDestinationIDs:withGroup:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)metadataForDestinationID:;
- (id)description;
- (id)initWithQueue:;
- (id)queue;
- (void)setObject:forDestinationID:;
- (id)providerCache;
+ (id)classIdentifier;
@end
