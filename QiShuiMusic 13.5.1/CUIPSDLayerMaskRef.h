@interface CUIPSDLayerMaskRef : NSObject
- (void)dealloc;
- (id)bounds;
- (BOOL)isEnabled;
- (id)initLayerMaskWithLayerRef:;
- (id)initVectorMaskWithLayerRef:;
- (id)layerRef;
- (BOOL)isLinked;
- (BOOL)isInvertedWhenBlending;
- (id)newBezierPath;
- (id)newBezierPathAtScale:;
- (id)createCGImageMask;
@end
