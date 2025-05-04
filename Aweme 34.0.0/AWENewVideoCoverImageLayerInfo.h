@interface AWENewVideoCoverImageLayerInfo : NSObject
@property (nonatomic) BOOL intelligentCutout;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL transformLayerContent;
@property (nonatomic) {CGPoint=dd} translate;
@property (nonatomic) {CGPoint=dd} scale;
@property (nonatomic) double rotate;
- (BOOL)intelligentCutout;
- (void)setIntelligentCutout:;
- (BOOL)transformLayerContent;
- (void)setTransformLayerContent:;
- (void)syncStateToLayer:;
- (void)setAlpha:;
- (id)scale;
- (double)alpha;
- (id)initWithLayer:;
- (void)setScale:;
- (double)rotate;
- (void)setRotate:;
- (id)translate;
- (void)setTranslate:;
@end
