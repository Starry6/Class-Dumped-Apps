@interface MPSeekCommandEvent : MPRemoteCommandEvent
@property (nonatomic) Q type;
- (unsigned long long)type;
- (id)initWithCommand:mediaRemoteType:options:;
- (unsigned int)mediaRemoteCommandType;
@end
