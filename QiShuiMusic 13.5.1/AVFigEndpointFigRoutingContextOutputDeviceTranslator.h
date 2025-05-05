@interface AVFigEndpointFigRoutingContextOutputDeviceTranslator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)outputDevicesFromRoutingContext:;
- (void)removeOutputDevice:withOptions:fromRoutingContext:completionHandler:;
- (void)setOutputDevices:withOptions:onRoutingContext:completionHandler:;
- (void)setOutputDevice:withOptions:onRoutingContext:completionHandler:;
- (id)predictedOutputDeviceFromRoutingContext:;
- (id)outputDeviceFromRoutingContext:;
- (void)addOutputDevice:withOptions:toRoutingContext:completionHandler:;
- (id)initForUsingRouteConfigUpdatedNotification:;
+ (id)sharedOutputDeviceTranslator;
@end
