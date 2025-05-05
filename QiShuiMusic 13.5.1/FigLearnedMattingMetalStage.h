@interface FigLearnedMattingMetalStage : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)finishProcessing;
- (id)initWithMetalContext:;
- (int)clearBuffer:;
- (int)createTileFrom:to:withStart:outCommandBuffer:;
- (int)createTileFrom:to:withStart:withScale:outCommandBuffer:;
- (int)pasteTileFrom:to:withStart:withNoOverlapStart:withNoOverlapEnd:outCommandBuffer:;
- (int)copyBufferFrom:to:outCommandBuffer:;
@end
