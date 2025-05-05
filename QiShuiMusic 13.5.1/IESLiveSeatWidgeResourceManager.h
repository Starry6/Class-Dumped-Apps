@interface IESLiveSeatWidgeResourceManager : IESLiveMultiBaseResourceManager
@property (nonatomic) NSArray effects;
@property (nonatomic) IESLiveSeatWidgeEffectTask task;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didJoinChannelWithLayout:;
- (void)didSetAttachingDIContext;
- (void)downloadEffectIfNeeded:;
- (void)downloadWidgetEffects;
- (void)getEffectWithName:complete:;
- (id)effects;
- (id)task;
- (void)setTask:;
- (void).cxx_destruct;
- (void)setEffects:;
@end
