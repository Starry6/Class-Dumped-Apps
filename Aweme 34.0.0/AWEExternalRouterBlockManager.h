@interface AWEExternalRouterBlockManager : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) NSMutableArray blockRules;
@property (nonatomic) AWEDLMSession deeplinkSession;
- (void)setDeeplinkSession:;
- (id)deeplinkSession;
- (id)blockRules;
- (id)initWithURLString:scene:linkSession:;
- (void)addBlockRule:;
- (void)clearAllRules;
- (BOOL)isBlockedURLString:context:userActivity:completion:;
- (void)setBlockRules:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
@end
