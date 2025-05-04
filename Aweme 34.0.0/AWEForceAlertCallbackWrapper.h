@interface AWEForceAlertCallbackWrapper : NSObject
@property (nonatomic) @? showCallback;
@property (nonatomic) @? closeCallback;
- (void)setCloseCallback:;
- (id)closeCallback;
- (id)showCallback;
- (void)setShowCallback:;
- (void).cxx_destruct;
@end
