@interface AWEPOIMapViewPool : NSObject
@property (nonatomic) NSMutableArray mapViewPool;
@property (nonatomic) NSMutableArray mapViewsInUse;
- (id)fetchMapView;
- (void)returnMapView:;
- (id)mapViewPool;
- (id)mapViewsInUse;
- (void)setMapViewPool:;
- (void)setMapViewsInUse:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedPool;
@end
