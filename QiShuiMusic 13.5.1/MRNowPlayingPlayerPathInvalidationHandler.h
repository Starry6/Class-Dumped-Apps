@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject
@property (nonatomic) MRPlayerPath playerPath;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) @? callback;
- (id)callback;
- (id)initWithPlayerPath:queue:invalidationCallback:;
- (void).cxx_destruct;
- (id)description;
- (id)playerPath;
- (id)queue;
@end
