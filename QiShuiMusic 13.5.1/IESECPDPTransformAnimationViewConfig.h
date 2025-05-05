@interface IESECPDPTransformAnimationViewConfig : MTLModel
@property (nonatomic) double scaleX;
@property (nonatomic) double scaleY;
@property (nonatomic) double animateTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAnimateTime:;
- (double)animateTime;
- (double)scaleX;
- (double)scaleY;
- (void)setScaleX:;
- (void)setScaleY:;
+ (id)JSONKeyPathsByPropertyKey;
@end
