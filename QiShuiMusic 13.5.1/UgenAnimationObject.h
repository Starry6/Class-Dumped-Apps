@interface UgenAnimationObject : NSObject
@property (nonatomic) UgenWidget widget;
@property (nonatomic) NSString animationName;
@property (nonatomic) UgenAnimationObjectNode head;
- (id)animationsWithTimingFunction:beginTime:;
- (id)initWithWidget:animationName:;
- (void)setAnimationName:;
- (void)setHead:;
- (id)head;
- (void)setWidget:;
- (id)widget;
- (void)addNode:;
- (void).cxx_destruct;
- (id)animationName;
@end
