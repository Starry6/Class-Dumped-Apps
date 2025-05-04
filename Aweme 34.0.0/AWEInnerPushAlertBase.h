@interface AWEInnerPushAlertBase : NSObject
@property (nonatomic) NSObject<AWEInnerPushAlertDelegate> delegate;
@property (nonatomic) @? onClose;
@property (nonatomic) @? onShow;
- (id)onShow;
- (void)alertDismissed:;
- (void)setOnShow:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)onClose;
- (void)setOnClose:;
@end
