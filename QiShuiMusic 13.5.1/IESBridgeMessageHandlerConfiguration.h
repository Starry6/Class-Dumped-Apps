@interface IESBridgeMessageHandlerConfiguration : NSObject
@property (nonatomic) Q handlerOptions;
@property (nonatomic) Q handlerAuthType;
- (unsigned long long)handlerAuthType;
- (unsigned long long)handlerOptions;
- (void)setHandlerAuthType:;
- (void)setHandlerOptions:;
- (id)copyWithZone:;
@end
