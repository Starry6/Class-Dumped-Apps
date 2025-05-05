@interface CHVisualization : NSObject
@property (nonatomic) q layeringPriority;
@property (nonatomic) BOOL wantsInputDrawings;
@property (nonatomic) CHRecognitionSession recognitionSession;
@property (nonatomic) <CHVisualizationDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)drawVisualizationInRect:context:viewBounds:;
- (id)recognitionSession;
- (id)initWithRecognitionSession:;
- (long long)layeringPriority;
- (BOOL)wantsInputDrawings;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)toggleVisualizationRegionAtPoint:;
@end
