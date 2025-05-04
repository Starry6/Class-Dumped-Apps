@interface AWEProfileLocationDataProvider : NSObject
@property (nonatomic) NSArray locationSegments;
- (id)locationSegments;
- (void)setLocationSegments:;
- (id)loadLocationsIfNeed;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
