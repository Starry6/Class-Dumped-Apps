@interface SISceneSegmentationData : NSObject
@property (nonatomic) ^{__CVBuffer=} semantic;
@property (nonatomic) ^{__CVBuffer=} confidence;
@property (nonatomic) ^{__CVBuffer=} uncertainty;
@property (nonatomic) {CGSize=dd} resolution;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)confidence;
- (void)dealloc;
- (id)uncertainty;
- (id)semantic;
- (id)resolution;
- (id)initWithOutputResolution:;
- (id)initWithOutputSemanticBuffer:confidenceBuffer:uncertaintyBuffer:;
@end
