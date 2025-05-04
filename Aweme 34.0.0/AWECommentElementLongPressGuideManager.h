@interface AWECommentElementLongPressGuideManager : NSObject
@property (nonatomic) UIView targetView;
@property (nonatomic) @? onClose;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (void)popoverDidDisappear:;
- (id)enterFrom;
- (long long)commentBtnLongpressStyle;
- (id)conditionKey;
- (id)initWithTargetView:generalModel:enterFrom:;
- (void)setGroupID:;
- (id)groupID;
- (id)targetView;
- (void)setTargetView:;
- (void).cxx_destruct;
- (id)authorID;
- (void)setAuthorID:;
- (id)onClose;
- (void)setOnClose:;
@end
