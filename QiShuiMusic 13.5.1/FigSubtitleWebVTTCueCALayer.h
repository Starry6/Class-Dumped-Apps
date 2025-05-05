@interface FigSubtitleWebVTTCueCALayer : FigSubtitleBackdropCALayer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRenderer:;
- (void)setContent:;
- (id)init;
- (void)dealloc;
- (void)layoutSublayersOfLayer:;
- (void)drawLayer:inContext:;
- (unsigned char)isDirty;
- (void)setViewport:;
- (void)setDefaultFontSize:;
- (id)getContentID;
- (void)setCuePosition:;
- (id)getSuggestedBounds:;
@end
