@interface SAMPPlaybackButton : SAAceView
@property (nonatomic) NSArray pauseCommands;
@property (nonatomic) NSArray playCommands;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)playCommands;
- (void)setPlayCommands:;
- (id)pauseCommands;
- (void)setPauseCommands:;
+ (id)playbackButton;
+ (id)playbackButtonWithDictionary:context:;
@end
