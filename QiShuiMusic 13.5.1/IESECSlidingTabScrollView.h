@interface IESECSlidingTabScrollView : UIScrollView
- (void)touchesBegan:withEvent:;
- (BOOL)pointInside:withEvent:;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
@end
