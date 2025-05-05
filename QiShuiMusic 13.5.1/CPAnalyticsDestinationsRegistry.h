@interface CPAnalyticsDestinationsRegistry : NSObject
@property (nonatomic) NSArray destinations;
- (id)init;
- (id)destinations;
- (void)sendToAllDestinations:;
- (void)updateWithConfigurationAtURL:cpAnalyticsInstance:;
- (void)_parseDestinationsFromConfig:cpAnalyticsInstance:;
- (void)addDestination:;
- (id)_readConfiguration:;
- (void).cxx_destruct;
- (void)removePhotoLibraryFromDestinations;
- (id)_destinationClassMap;
- (void)setupWithConfigurationAtURL:cpAnalyticsInstance:;
- (void)removeDestination:;
@end
