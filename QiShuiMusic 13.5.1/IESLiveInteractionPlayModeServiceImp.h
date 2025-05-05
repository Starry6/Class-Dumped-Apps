@interface IESLiveInteractionPlayModeServiceImp : NSObject
@property (nonatomic) NSMutableSet tasks;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) NSMutableDictionary playModeInfoSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSetAttachingDIContext;
- (void)executeCallBack:error:source:;
- (void)executeCallBack:source:;
- (void)fetchPlayModeInfoWithType:complete:;
- (BOOL)isPrefetch:;
- (BOOL)isRequesting;
- (BOOL)isSupportPreload:;
- (id)playModeInfoSource;
- (void)receiveLinkmicPreloadPlayModeInfo:;
- (void)requestPlayModeInfoIfNeed;
- (void)setIsRequesting:;
- (void)setPlayModeInfoSource:;
- (id)init;
- (void).cxx_destruct;
- (id)tasks;
- (void)setTasks:;
@end
