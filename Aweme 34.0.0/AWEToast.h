@interface AWEToast : NSObject
+ (void)showNetWeak;
+ (void)showAtTooMore;
+ (void)showSuccess:;
+ (void)showDraftPublishAndForceUseLocal:;
+ (void)show:onView:;
+ (void)showDraftPublish;
+ (void)showNotShare;
+ (void)showSelfSeeNotShare;
+ (void)showNotDownload;
+ (void)showNotDuet;
+ (void)showNotDownloadAndConvertLivePhoto;
+ (void)showNotComment;
+ (void)show:keyboardHeight:;
+ (void)showError:onView:;
+ (void)showSuccess:onView:;
+ (void)setToastStyle:;
+ (void)teen_showNetWeak;
+ (void)teen_showInQueue:;
+ (void)teen_showNetWeakInQueue;
+ (void)annouceAccessibilityMessage:;
+ (void)setTimer:;
+ (void)setMessageQueue:;
+ (id)timer;
+ (id)messageQueue;
+ (void)show:;
+ (void)showError:;
@end
