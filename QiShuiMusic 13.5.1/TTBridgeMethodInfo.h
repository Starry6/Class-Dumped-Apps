@interface TTBridgeMethodInfo : NSObject
@property (nonatomic) NSMutableDictionary authTypeMDic;
@property (nonatomic) @? handler;
@property (nonatomic) @? handlerWithCommand;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) NSDictionary authTypes;
- (id)authTypeMDic;
- (id)authTypes;
- (id)handlerWithCommand;
- (id)initWithEngineType:authType:bridgeName:;
- (void)registerWithEngineType:authType:bridgeName:;
- (void)setAuthTypeMDic:;
- (void)setExtraInfo:;
- (void)setHandlerWithCommand:;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (id)extraInfo;
@end
