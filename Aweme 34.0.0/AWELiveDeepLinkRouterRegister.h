@interface AWELiveDeepLinkRouterRegister : NSObject
@property (nonatomic) NSMutableDictionary schemaPreviewData;
@property (nonatomic) NSMutableDictionary executeTasks;
@property (nonatomic) NSNumber notifiedRoomID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)executeTasks;
- (void)setExecuteTasks:;
- (void)notifyPreLoadTaskExecute:;
- (id)notifiedRoomID;
- (void)setNotifiedRoomID:;
- (id)schemaPreviewData;
- (BOOL)registerWithRoomID:execute:;
- (void)setSchemaPreviewData:;
- (void).cxx_destruct;
+ (void)_aweLazyRegisterLoad;
+ (id)sharedManager;
@end
