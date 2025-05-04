@interface AWEAlertCallbackWrapper : NSObject
@property (nonatomic) @? showCallback;
@property (nonatomic) @? clickCallback;
@property (nonatomic) @? closeCallback;
- (void)setCloseCallback:;
- (id)closeCallback;
- (id)clickCallback;
- (id)showCallback;
- (void)setClickCallback:;
- (void)setShowCallback:;
- (void).cxx_destruct;
@end
