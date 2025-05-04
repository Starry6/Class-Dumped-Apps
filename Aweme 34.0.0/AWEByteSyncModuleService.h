@interface AWEByteSyncModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerBusinessId:handleMessageBlock:;
- (void)unregisterBusinessId:;
- (void)registerCommonParamsBlock:;
- (void)uploadMessageData:forBusinessId:;
- (void)trySyncDataFromServer;
@end
