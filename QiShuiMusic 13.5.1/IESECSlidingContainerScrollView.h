@interface IESECSlidingContainerScrollView : UIScrollView
@property (nonatomic) BOOL disableVerticalScrollBegin;
- (BOOL)disableVerticalScrollBegin;
- (void)setDisableVerticalScrollBegin:;
- (BOOL)gestureRecognizerShouldBegin:;
@end
