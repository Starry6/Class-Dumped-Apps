@interface AWEACCBubbleImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeBubble:;
- (id)showBubble:forView:inContainerView:anchorAdjustment:inDirection:bgStyle:completion:;
- (id)showBubble:forView:inContainerView:anchorAdjustment:inDirection:bgStyle:showDuration:completion:;
- (id)showBubbleWithCustomView:contentInsets:forView:inContainerView:fromAnchor:inDirection:anchorAdjustment:bgStyle:completion:;
- (void)bubble:supportTapToDismiss:;
- (void)tapToDismissWithBubble:;
- (id)showBubbleWithCustomView:contentInsets:forView:inContainerView:fromAnchor:inDirection:anchorAdjustment:cornerAdjustment:bgStyle:completion:;
- (id)showBubble:forView:inDirection:bgStyle:;
- (id)showBubble:forView:anchorAdjustment:inDirection:bgStyle:;
- (id)showBubble:forView:anchorAdjustment:inDirection:bgStyle:completion:;
- (id)showBubble:forView:inContainerView:anchorAdjustment:inDirection:bgStyle:numberOfLines:completion:;
- (id)showBubble:forView:iconView:iconViewInsets:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:direction:bgStyle:completion:;
- (id)showBubble:forView:iconView:inContainerView:iconViewInsets:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:direction:bgStyle:completion:;
- (id)showBubble:forView:iconView:inContainerView:iconViewInsets:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:direction:bgStyle:showDuration:completion:;
- (id)showBubble:forView:fromAnchor:anchorAdjustment:cornerAdjustment:fixedSize:inDirection:bgStyle:completion:;
- (id)showAttributedBubble:withCustomImage:imageInsets:textInsets:fixedSize:needFixedWidth:forView:inContainerView:fromAnchor:inDirection:anchorAdjustment:completion:;
- (void)bubble:textAlignment:;
- (void)bubble:textNumberOfLines:;
- (void)redoLayout:;
@end
