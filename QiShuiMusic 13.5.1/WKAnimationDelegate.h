@interface WKAnimationDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animationDidStart:;
- (void)animationDidStop:finished:;
- (void)invalidate;
- (id)initWithLayerID:layerTreeHost:;
@end
