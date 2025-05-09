@interface MDLTransform : NSObject
@property (nonatomic) CAAnimation transformAnimation;
@property (nonatomic)  translation;
@property (nonatomic)  rotation;
@property (nonatomic)  shear;
@property (nonatomic)  scale;
@property (nonatomic) {?=[4]} matrix;
@property (nonatomic) BOOL resetsTransform;
@property (nonatomic) double minimumTime;
@property (nonatomic) double maximumTime;
@property (nonatomic) NSArray keyTimes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setScale:;
- (void)setRotation:;
- (void).cxx_destruct;
- (id)translation;
- (id)rotation;
- (id)scale;
- (id).cxx_construct;
- (id)copyWithZone:;
- (id)keyTimes;
- (void)setTranslation:;
- (id)matrix;
- (void)setIdentity;
- (void)setMatrix:;
- (void)setLocalTransform:;
- (double)minimumTime;
- (double)maximumTime;
- (id)localTransformAtTime:;
- (id)transformAnimation;
- (void)setShear:;
- (id)shear;
- (id)initWithMatrix:;
- (BOOL)resetsTransform;
- (void)setResetsTransform:;
- (void)setLocalTransform:forTime:;
- (id)scaleAtTime:;
- (id)shearAtTime:;
- (id)translationAtTime:;
- (id)rotationAtTime:;
- (void)setMatrix:forTime:;
- (void)setRotation:forTime:;
- (void)setShear:forTime:;
- (void)setScale:forTime:;
- (void)setTranslation:forTime:;
- (id)initWithIdentity;
- (id)initWithTransformComponent:;
- (id)initWithTransformComponent:resetsTransform:;
- (id)initWithMatrix:resetsTransform:;
- (id)rotationMatrixAtTime:;
+ (id)globalTransformWithObject:atTime:;
+ (id)localTransformWithObject:atTime:;
@end
