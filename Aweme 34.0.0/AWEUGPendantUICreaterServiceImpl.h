@interface AWEUGPendantUICreaterServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)removeBubbleView:;
+ (id)createPendantContentViewWithUIInfo:;
+ (void)updatePendantContentViewWithUIInfo:contentView:;
+ (id)createPendantCloseViewWithUIInfo:;
+ (void)updatePendantCloseViewWithUIInfo:closeButton:;
+ (id)createPendantCapsuleWithUIInfo:;
+ (void)updatePendantCapsuleWithUIInfo:capsule:;
+ (id)createPendantCountDownViewWithUIInfo:;
+ (void)updatePendantCountDownViewWithUIInfo:capsule:;
+ (id)createPendantProgressWithUIInfo:;
+ (id)createPendantProgressWithUIInfo:type:;
+ (void)updatePendantProgressWithUIInfo:progressView:;
+ (id)createPendantBubbleViewWithUIInfo:contentView:cotainerView:isRightSide:isEdged:completion:;
@end
