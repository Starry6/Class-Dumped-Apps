@interface IESLiveInteractAnimationTraker : NSObject
@property (nonatomic) IESLiveInteractionBattleFullLinkMonitor monitor;
- (void)didSetAttachingDIContext;
- (void)monitorWithName:extra:eventType:;
- (void)monitorWithName:extra:eventType:metric:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
