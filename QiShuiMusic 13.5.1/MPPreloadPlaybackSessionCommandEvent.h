@interface MPPreloadPlaybackSessionCommandEvent : MPRemoteCommandEvent
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString type;
@property (nonatomic) q priority;
@property (nonatomic) NSString revision;
@property (nonatomic) NSURL playbackSessionDataFilePath;
@property (nonatomic) NSDictionary metadata;
- (id)metadata;
- (id)identifier;
- (id)type;
- (void).cxx_destruct;
- (id)revision;
- (long long)priority;
- (id)initWithCommand:mediaRemoteType:options:;
- (id)playbackSessionDataFilePath;
@end
