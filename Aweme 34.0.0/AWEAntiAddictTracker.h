@interface AWEAntiAddictTracker : NSObject
+ (void)trackToastShowWithContent:toastType:;
+ (void)trackInnerPushWithActionType:enterFrom:;
+ (void)trackToastCloseWithContent:type:;
+ (void)trackToastClickWithContent:toastType:noticeType:;
+ (void)trackToastSettingShowWithNoticeType:enterMethod:;
+ (void)trackToastSettingClickWithNoticeType:enterMethod:clickPosition:;
@end
