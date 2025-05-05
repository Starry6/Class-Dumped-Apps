@interface MRGameControllerDaemonProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addController:;
- (void)microControllerWithUDID:setDigitizerX:digitizerY:withTimeStamp:touchDown:;
- (void)removeController:;
- (void)controllerWithUDID:setData:;
- (void)controllerWithUDID:setValue:forElement:;
- (void)microControllerWithDigitizerX:withY:withTimeStamp:touchDown:;
- (void)_openConnection;
- (void).cxx_destruct;
- (void)replyConnectedHosts:;
- (id)addEmulatedControllerWithProperties:;
- (void)removeEmulatedController:;
- (void)controllerID:setValue:forElement:withUpDelay:;
- (void)controllerID:setValue:forElement:;
- (void)controllerID:setDigitizerX:digitizerY:withTimeStamp:touchDown:;
- (void)controllerID:setArrayValueX:y:z:w:forElement:;
- (BOOL)_delayEvent:setValue:forElement:withUpDelay:;
+ (id)defaultGameControllerDaemonProxy;
@end
