@interface AWEIMAudioDownloadProgressView : UIView
@property (nonatomic) Q state;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) AWEIMCircleProgressView progressView;
@property (nonatomic) <AWEIMAudioDownloadProgressViewDelegate> delegate;
- (void)configWithMessageState:sendFromMe:;
- (void)configProgressColor:;
- (void)configDownloadProgress:;
- (void)configBackgroudProgressColor:;
- (void)updateWithSendFromMe:hasChatBackground:;
- (BOOL)needEnlargeMessageUI;
- (void)p_createProgressViewIfNeeded;
- (id)delegate;
- (id)progressView;
- (id)initWithFrame:;
- (unsigned long long)state;
- (void)setProgressView:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setImageView:;
- (void)setState:;
- (id)imageView;
+ (BOOL)enableLazyCreateView;
@end
