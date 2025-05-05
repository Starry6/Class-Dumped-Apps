@interface MKPlacePublisherRefiner : NSObject
- (void).cxx_destruct;
- (void)fetchWithCallbackQueue:completion:;
- (id)initWithPublisherIdentifier:;
- (id)initWithPublisherIdentifier:providerIdentifier:;
@end
