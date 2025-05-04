@interface AWEAfterPublishActivityAlert : NSObject
@property (nonatomic) @? onClose;
@property (nonatomic) AWEPublishBaseTask task;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerDidClose:;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (void)showWithContext:onClose:;
- (double)showTimeoutWithContext:;
- (BOOL)consumerSupportOpenH5UrlWithTask:;
- (void)consumerOpenH5UrlWithTask:completion:;
- (void)setTask:;
- (id)task;
- (void).cxx_destruct;
- (id)onClose;
- (void)setOnClose:;
@end
