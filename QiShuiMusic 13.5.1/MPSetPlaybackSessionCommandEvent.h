@interface MPSetPlaybackSessionCommandEvent : MPRemoteCommandEvent
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString type;
@property (nonatomic) NSData playbackSessionData;
- (id)identifier;
- (id)type;
- (void).cxx_destruct;
- (id)playbackSessionData;
- (id)initWithCommand:mediaRemoteType:options:;
@end
