@interface MRNowPlayingClientCommandQueueEntry : NSObject
@property (nonatomic) I command;
@property (nonatomic) NSMutableDictionary options;
@property (nonatomic) MRPlayerPath playerPath;
@property (nonatomic) NSDate dateCreated;
@property (nonatomic) @? commandCompletion;
- (void)setOptions:;
- (void)setPlayerPath:;
- (unsigned int)command;
- (id)options;
- (id)dateCreated;
- (void).cxx_destruct;
- (id)description;
- (id)playerPath;
- (void)setCommand:;
- (void)setDateCreated:;
- (id)commandCompletion;
- (void)setCommandCompletion:;
@end
