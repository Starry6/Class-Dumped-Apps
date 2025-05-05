@interface AWEToast : NSObject
+ (void)showNotDownload;
+ (void)setToastStyle:;
+ (void)show:keyboardHeight:;
+ (void)show:onView:;
+ (void)showAtTooMore;
+ (void)showDraftPublish;
+ (void)showDraftPublishAndForceUseLocal:;
+ (void)showError:onView:;
+ (void)showNetWeak;
+ (void)showNotComment;
+ (void)showNotDownloadAndConvertLivePhoto;
+ (void)showNotDuet;
+ (void)showNotShare;
+ (void)showSelfSeeNotShare;
+ (void)showSuccess:onView:;
+ (void)show:;
+ (void)showError:;
+ (void)showSuccess:;
@end
