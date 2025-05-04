@interface AWEIMEmojiPanelMessageChangeContext : NSObject
@property (nonatomic) UIView sourceView;
@property (nonatomic) UIPanGestureRecognizer panGestureRecognizer;
@property (nonatomic) BOOL isCancel;
@property (nonatomic) Q sourceType;
- (void)setSourceType:;
- (unsigned long long)sourceType;
- (void)setSourceView:;
- (id)sourceView;
- (void)setPanGestureRecognizer:;
- (void).cxx_destruct;
- (id)panGestureRecognizer;
- (BOOL)isCancel;
- (void)setIsCancel:;
@end
