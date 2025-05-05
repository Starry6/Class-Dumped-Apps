@interface IESLiveBridgeMethod : NSObject
@property (nonatomic) IESECLiveRoomContext ieseclive_roomContext;
@property (nonatomic) IESLiveBridgeMethodContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
- (Class)paramModelClass;
- (void)setShouldLazyCreateCallHandler:;
- (id)ieseclive_roomContext;
- (void)registerHandlerWithBridge:;
- (Class)resultModelClass;
- (BOOL)shouldLazyCreateCallHandler;
- (id)init;
- (id)context;
- (unsigned long long)authType;
- (void).cxx_destruct;
- (void)setContext:;
- (id)methodName;
@end
