@interface IESBridgeEngine_Deprecated : NSObject
@property (nonatomic) NSMutableArray internalMethods;
@property (nonatomic) <IESBridgeExecutor> executor;
@property (nonatomic) <IESBridgeEngineDelegate_Deprecated> delegate;
@property (nonatomic) NSArray methods;
- (id)internalMethods;
- (void)executeMethod:withMessage:;
- (void)executeMethodsWithMessage:;
- (void)removeAllMethods;
- (void)sendBridgeMessage:;
- (void)sendCallback:params:;
- (void)sendEvent:params:;
- (void)setInternalMethods:;
- (id)methods;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)executor;
- (void)addMethod:;
- (void)setExecutor:;
+ (void)addGlobalMethod:;
@end
