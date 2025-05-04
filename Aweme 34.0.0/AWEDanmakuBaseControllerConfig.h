@interface AWEDanmakuBaseControllerConfig : NSObject
@property (nonatomic) q sceneType;
@property (nonatomic) <AWEDanmakuBaseControllerDelegate> delegate;
@property (nonatomic) <AWEDanmakuBaseContextProtocol> context;
- (id)initWithSceneType:delegate:context:;
- (id)delegate;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
- (long long)sceneType;
- (void)setSceneType:;
@end
