@interface MPSpecialSeekCommandEvent : MPRemoteCommandEvent
@property (nonatomic) Q type;
- (unsigned long long)type;
- (id)initWithCommand:mediaRemoteType:options:;
@end
