@interface AWEKnowledgeRichContentImpl.PureModePinchKeepScaleGuideManager : NSObject
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (void)showWithContext:onClose:;
- (void)deferShowGuideIfNeeded;
- (void)cancelDeferShowGuideIfExist;
- (id)init;
- (void).cxx_destruct;
@end
