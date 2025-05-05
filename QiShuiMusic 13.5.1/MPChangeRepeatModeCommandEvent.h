@interface MPChangeRepeatModeCommandEvent : MPRemoteCommandEvent
@property (nonatomic) q repeatType;
@property (nonatomic) BOOL preservesRepeatMode;
- (long long)repeatType;
- (BOOL)preservesRepeatMode;
- (id)initWithCommand:mediaRemoteType:options:;
@end
