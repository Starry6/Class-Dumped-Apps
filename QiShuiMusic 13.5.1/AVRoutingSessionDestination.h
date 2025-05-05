@interface AVRoutingSessionDestination : NSObject
@property (nonatomic) NSArray outputDeviceDescriptions;
@property (nonatomic) float probability;
@property (nonatomic) BOOL providesExternalVideoPlayback;
- (id)init;
- (void)dealloc;
- (id)description;
- (float)probability;
- (id)initWithFigRoutingSessionDestination:;
- (id)outputDeviceDescriptions;
- (BOOL)_canQueryOutputDeviceDescriptionsAndReturnCurrentValue:;
- (BOOL)providesExternalVideoPlayback;
@end
