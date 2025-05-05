@interface AVFigRouteDescriptorFigRoutingContextOutputDeviceTranslator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)outputDevicesFromRoutingContext:;
- (void)dealloc;
- (void)removeOutputDevice:withOptions:fromRoutingContext:completionHandler:;
- (void)setOutputDevices:withOptions:onRoutingContext:completionHandler:;
- (void)setOutputDevice:withOptions:onRoutingContext:completionHandler:;
- (id)initForUsingRouteConfigUpdatedNotification:syncController:;
- (id)predictedOutputDeviceFromRoutingContext:;
- (id)outputDeviceFromRoutingContext:;
- (void)addOutputDevice:withOptions:toRoutingContext:completionHandler:;
+ (id)sharedOutputDeviceTranslator;
@end
