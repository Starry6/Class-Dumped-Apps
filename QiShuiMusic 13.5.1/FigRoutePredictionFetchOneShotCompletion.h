@interface FigRoutePredictionFetchOneShotCompletion : NSObject
- (id)init;
- (void)dealloc;
- (void)invokeWithRoutePredictions:predictionContext:;
- (id)initWithCompletionHandler:;
@end
