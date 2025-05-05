@interface MKMapViewLabelMarkerState : NSObject
@property (nonatomic) BOOL visible;
@property (nonatomic) C balloonBehavior;
- (void)setVisible:;
- (BOOL)isVisible;
- (unsigned char)balloonBehavior;
- (void)setBalloonBehavior:;
+ (id)stateForLabelMarker:;
@end
