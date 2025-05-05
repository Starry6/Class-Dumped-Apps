@interface MPPlaybackSessionCommandEvent : MPRemoteCommandEvent
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString revision;
@property (nonatomic) q priority;
- (id)identifier;
- (void).cxx_destruct;
- (id)revision;
- (long long)priority;
- (id)initWithCommand:mediaRemoteType:options:;
@end
