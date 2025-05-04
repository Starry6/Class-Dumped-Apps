@interface AWEFeedContainerViewControllerBubbleObject : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) {CGPoint=dd} point;
@property (nonatomic) AWEHomePageBubbleModel bubbleModel;
@property (nonatomic) AWEHPChannelBubbleTask task;
@property (nonatomic) <AWEHomePageBubbleProtocol> popover;
- (id)bubbleModel;
- (void)setBubbleModel:;
- (void)setTask:;
- (id)view;
- (id)task;
- (void)setView:;
- (id)point;
- (id)popover;
- (id)description;
- (void).cxx_destruct;
- (void)setPopover:;
- (void)setPoint:;
+ (id)getBubbleModelWithChannelBubbleModel:;
@end
