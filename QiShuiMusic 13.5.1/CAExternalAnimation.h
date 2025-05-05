@interface CAExternalAnimation : CAPropertyAnimation
@property (nonatomic) Q animId;
@property (nonatomic) @? presentationBlock;
- (id)_copyRenderAnimationForLayer:;
- (BOOL)_setCARenderAnimation:layer:;
- (void)dealloc;
- (void)applyForTime:presentationObject:modelObject:;
- (id)copyWithZone:;
- (void)setPresentationBlock:;
- (id)presentationBlock;
- (unsigned long long)animId;
- (void)setAnimId:;
+ (id)animationWithKeyPath:;
@end
