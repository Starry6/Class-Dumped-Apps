@interface AVFigRoutingContextSendConfigureDeviceCommandOperation : AVOperation
@property (nonatomic) <AVOutputDeviceConfigurationRetrieval> finalConfiguration;
- (id)init;
- (void)dealloc;
- (void)start;
- (BOOL)isAsynchronous;
- (id)initWithRoutingContext:configuratorBlock:;
- (id)finalConfiguration;
- (void)setFinalConfiguration:;
@end
