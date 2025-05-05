@interface BSMutableServiceInterface : BSServiceInterface
@property (nonatomic) NSString identifier;
@property (nonatomic) q clientMessagingExpectation;
@property (nonatomic) BSObjCProtocol server;
@property (nonatomic) BSObjCProtocol client;
- (void)setClient:;
- (void)setServer:;
- (void)setClientMessagingExpectation:;
- (void)setIdentifier:;
- (id)copyWithZone:;
+ (id)interfaceWithIdentifier:;
@end
