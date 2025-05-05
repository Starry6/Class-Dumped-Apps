@interface UITextTapRecognizer : UITapGestureRecognizer
@property (nonatomic) double touchBasedAllowableMovement;
@property (nonatomic) NSArray touchesForTap;
- (void)setTouchesForTap:;
- (void)touchesBegan:withEvent:;
- (void).cxx_destruct;
- (void)setTouchBasedAllowableMovement:;
- (void)touchesEnded:withEvent:;
- (double)touchBasedAllowableMovement;
- (id)initWithTarget:action:;
- (id)touchesForTap;
@end
