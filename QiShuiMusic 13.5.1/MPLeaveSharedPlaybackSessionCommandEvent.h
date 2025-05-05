@interface MPLeaveSharedPlaybackSessionCommandEvent : MPRemoteCommandEvent
@property (nonatomic) NSString sessionIdentifier;
- (id)sessionIdentifier;
- (void).cxx_destruct;
- (id)initWithCommand:mediaRemoteType:options:;
@end
