@interface GEOCollectionPublisherAttributionManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)bestAttributionForPublisher:;
- (id)bestAttributionForPublisher:preferredLanguages:;
+ (id)sharedInstance;
@end
