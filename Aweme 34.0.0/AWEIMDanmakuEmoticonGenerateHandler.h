@interface AWEIMDanmakuEmoticonGenerateHandler : NSObject
+ (id)imageProcessNode;
+ (void)removePipelineWithContext:;
+ (id)registerNode;
+ (id)contentValidCheckNode;
+ (id)checkMD5Node;
+ (id)uploadNode;
+ (id)createEmoticonNode;
+ (id)sendMessageNode;
+ (id)pipeline;
+ (id)pipelineCache;
+ (id)endNode;
@end
