@interface MPChangeShuffleModeCommandEvent : MPRemoteCommandEvent
@property (nonatomic) q shuffleType;
@property (nonatomic) BOOL preservesShuffleMode;
- (long long)shuffleType;
- (BOOL)preservesShuffleMode;
- (id)initWithCommand:mediaRemoteType:options:;
@end
