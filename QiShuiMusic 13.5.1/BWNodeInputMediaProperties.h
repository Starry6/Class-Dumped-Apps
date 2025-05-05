@interface BWNodeInputMediaProperties : NSObject
@property (nonatomic) BWFormat resolvedFormat;
@property (nonatomic) BWVideoFormat resolvedVideoFormat;
@property (nonatomic) BWFormat liveFormat;
@property (nonatomic) BWVideoFormat liveVideoFormat;
- (id)liveFormat;
- (void)dealloc;
- (void)setResolvedFormat:;
- (id)resolvedVideoFormat;
- (void)setLiveFormat:;
- (void)_setOwningNodeInput:associatedAttachedMediaKey:;
- (id)liveVideoFormat;
- (id)resolvedFormat;
@end
