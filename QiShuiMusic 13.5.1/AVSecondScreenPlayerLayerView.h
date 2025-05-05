@interface AVSecondScreenPlayerLayerView : UIView
@property (nonatomic) AVPlayerLayer layer;
@property (nonatomic) AVPlayerLayer activeSourcePlayerLayer;
@property (nonatomic) AVObservationController observationController;
- (void)dealloc;
- (id)observationController;
- (void)setObservationController:;
- (void).cxx_destruct;
- (void)startShowingContentFromSourcePlayerLayer:;
- (void)stopShowingContentFromActiveSourcePlayerLayer;
- (id)activeSourcePlayerLayer;
- (void)setActiveSourcePlayerLayer:;
+ (Class)layerClass;
@end
