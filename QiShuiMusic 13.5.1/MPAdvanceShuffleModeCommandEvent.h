@interface MPAdvanceShuffleModeCommandEvent : MPRemoteCommandEvent
@property (nonatomic) BOOL preservesShuffleMode;
- (BOOL)preservesShuffleMode;
- (id)initWithCommand:mediaRemoteType:options:;
@end
