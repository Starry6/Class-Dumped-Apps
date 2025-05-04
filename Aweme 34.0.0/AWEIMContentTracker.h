@interface AWEIMContentTracker : NSObject
+ (void)trackShow:extra:;
+ (void)trackIMMessageClick:extra:;
+ (void)trackVideoClick:;
+ (void)trackShowWithMsg:conContext:extra:;
+ (void)trackClickWithMsg:conContext:extra:;
+ (void)trackVideoWithEvent:inCell:conversation:;
+ (void)trackShareCardEventWithName:force:message:viewModel:conversation:;
+ (id)cardCommonParamsWithMsg:conContext:;
+ (void)p_addCommonParamsIn:message:extra:;
+ (void)p_addCustomParamsIn:message:;
+ (void)p_trackImageMessageIfNeededWithEvent:message:conversation:;
+ (void)trackImageMessageShowIfNeeded:conversation:;
+ (void)trackImageMessageClickIfNeeded:conversation:;
+ (void)trackUnavailableMessageShow:conversation:;
@end
