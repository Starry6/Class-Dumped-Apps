@interface UITextLinkInteraction : UITextItemInteractionInteraction
@property (nonatomic) <UIContextMenuInteractionDelegate> contextMenuDelegateProxy;
- (id)contextMenuDelegateProxy;
+ (id)interactionWithShouldProxyContextMenuDelegate:;
@end
