@interface CUIRenditionLayerReference : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) NSString layerName;
@property (nonatomic) double opacity;
@property (nonatomic) NSInteger blendMode;
@property (nonatomic) BOOL fixedFrame;
@property (nonatomic) BOOL makeOpaqueIfPossible;
@property (nonatomic) CUIRenditionKey referenceKey;
- (void)setOpacity:;
- (id)init;
- (void)dealloc;
- (void)setFrame:;
- (double)opacity;
- (id)layerName;
- (id)frame;
- (void)setBlendMode:;
- (void)setLayerName:;
- (int)blendMode;
- (id)referenceKey;
- (void)setReferenceKey:;
- (BOOL)fixedFrame;
- (void)setFixedFrame:;
- (BOOL)makeOpaqueIfPossible;
- (void)setMakeOpaqueIfPossible:;
@end
