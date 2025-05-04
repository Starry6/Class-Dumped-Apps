@interface AWEUGPendantBubbleUICreater : NSObject
+ (id)createPendantBubbleViewWithUIInfo:contentView:cotainerView:isRightSide:isEdged:completion:;
+ (void)removePendantBubbleView:;
+ (id)createNewPendantBubbleViewWithUIInfo:cotainerView:contentView:isRightSide:completion:;
@end
