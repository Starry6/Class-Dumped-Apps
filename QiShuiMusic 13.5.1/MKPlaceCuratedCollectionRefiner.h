@interface MKPlaceCuratedCollectionRefiner : NSObject
- (id)initWithCollectionIdentifier:;
- (void).cxx_destruct;
- (id)initWithCollectionIdentifier:providerIdentifier:;
- (void)fetchWithCallbackQueue:completion:;
- (void)_resolveMapItemsWithCollection:callbackQueue:completion:;
@end
