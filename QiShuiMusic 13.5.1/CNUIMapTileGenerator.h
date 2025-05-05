@interface CNUIMapTileGenerator : NSObject
@property (nonatomic) @? geocoderProvider;
@property (nonatomic) @? snapshotterProvider;
@property (nonatomic) <CNScheduler> workQueue;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
- (id)init;
- (id)workQueue;
- (id)schedulerProvider;
- (void).cxx_destruct;
- (id)initWithGeocoderProvider:snapshotterProvider:schedulerProvider:;
- (id)tilesForAddress:;
- (id)geocoderProvider;
- (id)snapshotterProvider;
+ (id)defaultImage;
+ (double)defaultTileSize;
+ (id)placemarkForAddress:geocoderProvider:scheduler:;
+ (id)mapTileImagesForPlacemark:snapshotterProvider:scheduler:;
@end
