@interface CEKAnimationGenerator : NSObject
@property (nonatomic) NSMutableDictionary _animations;
@property (nonatomic) CADisplayLink _displayLink;
- (id)_animations;
- (id)init;
- (void)dealloc;
- (id)_displayLink;
- (void).cxx_destruct;
- (void)_handleDisplayLinkFired:;
- (void)startAnimationForIdentifier:duration:updateHandler:completionHandler:;
- (void)stopAnimationForIdentifier:;
- (void)_stopAnimationForIdentifier:didComplete:;
- (void)stopAllAnimations;
- (BOOL)isAnimatingForIdentifier:;
- (void)_updateAnimationForIdentifer:timestamp:;
- (void)set_animations:;
- (void)set_displayLink:;
@end
