@interface XMattingSolver : NSObject
@property (nonatomic) {?=IIIIfIBffII} config;
- (void)setConfig:;
- (int)_compileShadersWithLibrary:;
- (void)releaseResources;
- (void).cxx_destruct;
- (int)allocateResources:;
- (id)config;
- (id)initWithDevice:library:;
- (int)encodeConstraintsOn:segmentation:constraints:;
- (int)encodeApplySolverConstraintsOn:constraints:filteredSegmentation:segmentation:;
- (int)enqueueSolveOn:constraints:colorGuide:extraGuide:inputTexture:outputTexture:;
@end
