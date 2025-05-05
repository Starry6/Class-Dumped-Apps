@interface ICLiveLinkQueueEventPlaybackModeChanged : NSObject
@property (nonatomic) q kind;
@property (nonatomic) @? shuffleType;
@property (nonatomic) @? repeatType;
@property (nonatomic) @? autoPlayEnabled;
- (long long)kind;
- (id)repeatType;
- (void).cxx_destruct;
- (id)description;
- (id)shuffleType;
- (id)initWithUpdatedShuffleType:;
- (id)initWithUpdatedRepeatType:;
- (id)initWithUpdatedAutoPlayEnabled:;
- (id)autoPlayEnabled;
@end
