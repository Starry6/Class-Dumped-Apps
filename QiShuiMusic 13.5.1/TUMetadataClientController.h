@interface TUMetadataClientController : NSObject
@property (nonatomic) TUMetadataCache metadataCache;
- (id)init;
- (id)metadataCache;
- (id)locationForDestinationID:;
- (void)setMetadataCache:;
- (id)suggestionForSearchItem:;
- (id)directoryLabelForDestinationID:;
- (void)updateMetadataForCall:;
- (id)_metadataDestinationIdForSearchItem:;
- (id)suggestionForDestinationID:;
- (void).cxx_destruct;
- (void)updateMetadataForDestinationID:;
- (id)directoryLabelForSearchItem:;
- (id)locationForSearchItem:;
- (void)updateMetadataForRecentCalls:;
+ (id)sharedInstance;
@end
