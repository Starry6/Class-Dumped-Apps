@interface HSPlaybackControlRequest : HSRequest
@property (nonatomic) q controlCommand;
@property (nonatomic) I interfaceID;
- (unsigned int)interfaceID;
- (long long)controlCommand;
- (id)initWithInterfaceID:controlCommand:;
@end
