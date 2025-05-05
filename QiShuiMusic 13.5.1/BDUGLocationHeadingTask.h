@interface BDUGLocationHeadingTask : NSObject
@property (nonatomic) NSMapTable headingMap;
@property (nonatomic) CLLocationManager headingManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_clearLocation;
- (void)addHeadingWithTarget:completionHandler:;
- (id)headingManager;
- (id)headingMap;
- (void)removeAllLocations;
- (void)removeLocationWithTarget:;
- (void)setHeadingManager:;
- (void)setHeadingMap:;
- (id)init;
- (void)dealloc;
- (void)locationManager:didUpdateHeading:;
- (void)locationManager:didFailWithError:;
- (void).cxx_destruct;
+ (id)defaultTask;
@end
