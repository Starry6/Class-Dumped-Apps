@interface WebDeviceOrientationProviderMock : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)lastOrientation;
- (void)setController:;
- (void)setOrientation:;
- (void)startUpdating;
- (void)stopUpdating;
+ (id)shared;
@end
