@interface MPAdvanceRepeatModeCommandEvent : MPRemoteCommandEvent
@property (nonatomic) BOOL preservesRepeatMode;
- (BOOL)preservesRepeatMode;
- (id)initWithCommand:mediaRemoteType:options:;
@end
