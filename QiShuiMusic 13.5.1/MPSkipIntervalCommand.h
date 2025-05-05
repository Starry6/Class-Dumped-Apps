@interface MPSkipIntervalCommand : MPRemoteCommand
@property (nonatomic) NSArray preferredIntervals;
- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:;
- (id)newCommandEventWithInterval:;
- (void).cxx_destruct;
- (id)preferredIntervals;
- (void)setPreferredIntervals:;
@end
