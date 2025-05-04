@interface AWEEdgeAIWrapper : NSObject
@property (nonatomic) EAIEdgeAI edgeai;
- (void)run:callback:;
- (void)setEdgeai:;
- (id)edgeai;
- (void)preloadPropPanelInfoWithAI:enterFrom:shootWay:shouldLoadCallback:;
- (void)invokeCallbackOnMainThread:;
- (void)recordAIResult:output:doAction:creationId:enterFrom:shootWay:;
- (id)init;
- (void).cxx_destruct;
+ (id)getOrCreate:;
+ (void)processApplog:params:;
+ (BOOL)shouldInitEdgeAI;
@end
