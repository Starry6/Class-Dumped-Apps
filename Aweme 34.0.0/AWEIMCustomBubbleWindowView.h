@interface AWEIMCustomBubbleWindowView : UIView
@property (nonatomic) AWEBubble bubbleView;
@property (nonatomic) <IESIMCustomBubbleWindowViewDelegate> delegate;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)delegate;
- (BOOL)isDismissing;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setDelegate:;
- (void)setIsDismissing:;
- (id)bubbleView;
- (void)setBubbleView:;
+ (id)showBubbleWithContent:onView:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:inDirection:isDarkBackGround:numberOfLines:completion:withAnimation:;
+ (id)showBubbleWithCustomView:onView:contentInsets:fromAnchor:anchorAdjustment:cornerAdjustment:inDirection:isDarkBackGround:completion:withAnimation:;
@end
