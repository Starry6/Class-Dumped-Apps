@interface AWEBubbleManager : NSObject
- (void)removeBubble:;
- (id)showAttributedBubble:withCustomImage:imageInsets:textInsets:fixedSize:needFixedWidth:forView:inContainerView:fromAnchor:inDirection:anchorAdjustment:withAnimations:completion:;
- (id)showBubble:forView:anchorAdjustment:inDirection:isDarkBackGround:;
- (id)showBubble:forView:anchorAdjustment:inDirection:isDarkBackGround:completion:;
- (id)showBubble:forView:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:inDirection:isDarkBackGround:completion:;
- (id)showBubble:forView:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:inDirection:isDarkBackGround:useWindowToAdjustBodyFrame:completion:;
- (id)showBubble:forView:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:inDirection:isDarkBackGround:useWindowToAdjustBodyFrame:useAnchorAdjustmentAsOffset:completion:;
- (id)showBubble:forView:inContainerView:anchorAdjustment:inDirection:isDarkBackGround:completion:;
- (id)showBubble:forView:inContainerView:anchorAdjustment:inDirection:useWindowToAdjustBodyFrame:isDarkBackGround:completion:;
- (id)showBubble:forView:inContainerView:anchorAdjustment:inDirection:useWindowToAdjustBodyFrame:isDarkBackGround:showDuration:completion:;
- (id)showBubble:forView:inContainerView:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:inDirection:isDarkBackGround:completion:withAnimation:;
- (id)showBubble:forView:inContainerView:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:inDirection:isDarkBackGround:useWindowToAdjustBodyFrame:useAnchorAdjustmentAsOffset:completion:;
- (id)showBubble:forView:inContainerView:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:inDirection:isDarkBackGround:useWindowToAdjustBodyFrame:useAnchorAdjustmentAsOffset:showDuration:completion:;
- (id)showBubble:forView:inContainerView:fromAnchor:anchorAdjustment:inDirection:withAnimations:useWindowToAdjustBodyFrame:isDarkBackGround:completion:;
- (id)showBubble:forView:inDirection:isDarkBackGround:;
- (id)showBubble:forView:withIconView:iconViewInsets:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:inDirection:isDarkBackGround:completion:;
- (id)showBubble:forView:withIconView:inContainerView:iconViewInsets:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:inDirection:isDarkBackGround:completion:;
- (id)showBubble:withCustomImage:imageInsets:textInsets:font:fontColor:fixedSize:forView:inContainerView:fromAnchor:inDirection:anchorAdjustment:withAnimations:completion:;
- (id)showBubbleView:forView:inContainerView:fromAnchor:inDirection:withAnimations:completion:;
- (id)showBubbleWithCustomView:contentInsets:isDarkBackGround:forView:inContainerView:fromAnchor:inDirection:anchorAdjustment:cornerAdjustment:withAnimations:completion:;
- (id)showBubbleWithCustomView:contentInsets:isDarkBackGround:forView:inContainerView:fromAnchor:inDirection:anchorAdjustment:withAnimations:completion:;
+ (id)sharedManager;
@end
