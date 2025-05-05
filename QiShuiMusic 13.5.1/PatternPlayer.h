@interface PatternPlayer : PatternPlayerBase
@property (nonatomic) BOOL isMuted;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (BOOL)isMuted;
- (void).cxx_destruct;
- (void)setIsMuted:;
- (BOOL)stopAtTime:error:;
- (BOOL)startAtTime:error:;
- (BOOL)sendParameters:atTime:error:;
- (BOOL)startAtTime:withImmediateParameters:error:;
- (BOOL)scheduleParameterCurve:atTime:error:;
- (BOOL)cancelAndReturnError:;
- (void)releaseExternalResources:events:;
- (id)processImmediateParameters:;
- (id)initWithPlayable:engine:privileged:error:;
- (void)doSetMute:;
- (void)clearExternalResources:;
@end
