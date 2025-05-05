@interface ISLivePhotoSeekBehavior : ISBehavior
@property (nonatomic) {?=qiIq} seekTime;
@property (nonatomic) @? seekCompletionHandler;
- (void).cxx_destruct;
- (void)setSeekTime:;
- (id)seekTime;
- (long long)behaviorType;
- (id)seekCompletionHandler;
- (void)setSeekCompletionHandler:;
- (void)activeDidChange;
- (id)initWithInitialLayoutInfo:seekTime:;
- (void)_seekIfNeeded;
- (void)_callSeekCompletionHandler:;
- (void)_handleDidSeekToSeekTime:;
@end
