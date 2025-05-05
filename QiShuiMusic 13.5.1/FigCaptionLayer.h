@interface FigCaptionLayer : FigBaseCALayer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)drawLayer:inContext:;
- (void)setVideoRelativeToViewport:;
- (void)setFontName:;
- (void)layoutSublayers;
- (void)setCaptionsAvoidanceMargins:;
- (void)setOptions:forKeyPath:;
- (void)setSeparatedValue:;
- (void)resetCaptions;
- (void)processCaptionCommand:data:;
- (void)updateDisplay:;
@end
