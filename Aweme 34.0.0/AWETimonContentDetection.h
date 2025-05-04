@interface AWETimonContentDetection : NSObject
@property (nonatomic) q locationPermissionState;
@property (nonatomic) q contactPermissionState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getPermissionStateForDateType:;
- (void)locationPermissionStatus;
- (long long)contactPermissionStatus;
- (long long)locationPermissionState;
- (long long)contactPermissionState;
- (void)setLocationPermissionState:;
- (void)setContactPermissionState:;
- (id)init;
+ (id)sharedInstance;
@end
