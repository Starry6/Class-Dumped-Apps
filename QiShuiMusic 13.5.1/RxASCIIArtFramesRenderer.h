@interface RxASCIIArtFramesRenderer : NSObject
@property (nonatomic) NSArray frames;
@property (nonatomic) double outputLineWidth;
- (void).cxx_destruct;
- (id)description;
- (id)visualDescription;
- (id)frames;
- (id)initWithFrames:;
- (id)initWithFrames:outputLineWidth:;
- (double)outputLineWidth;
- (id)renderedLines;
- (id)scaledRectForRect:scaleSize:;
- (id)_normalizeFrames:;
@end
