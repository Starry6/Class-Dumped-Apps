@interface UgenAnimationEffectNode : NSObject
@property (nonatomic) NSString type;
- (id)animationLayerWithAnimationView:animationInfo:;
- (id)initWithDictionary:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
+ (id)effectNodeWithDictionary:;
@end
