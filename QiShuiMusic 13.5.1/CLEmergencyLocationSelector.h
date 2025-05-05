@interface CLEmergencyLocationSelector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)locationManager:didUpdateLocations:;
- (void)stopSession;
- (id)initWithConfig:bundle:delegate:queue:;
@end
