@interface AWESearchVideoReuseHandler : NSObject
@property (nonatomic) AWESearchVideoContext lastSearchVideoContext;
@property (nonatomic) BOOL shouldUpdatePlayer;
@property (nonatomic) AWEPlayVideoViewController playVideoViewController;
@property (nonatomic) AWEPlayVideoPlayerContext videoPlayerContext;
@property (nonatomic) <AWESearchVideoReuseHandlerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)playVideoViewController;
- (void)setPlayVideoViewController:;
- (void)setShouldUpdatePlayer:;
- (BOOL)shouldUpdatePlayer;
- (BOOL)hasPrepareToReuse;
- (void)resumeSearchElementContext:;
- (void)stashSearchElementContext;
- (id)lastSearchVideoContext;
- (void)setLastSearchVideoContext:;
- (void)setVideoPlayerContext:;
- (void)updatePlayerWrapperContext:;
- (id)videoPlayerContext;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)reuseIdentifier;
@end
