@interface AWEPadMVchannelManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ChannelType;
- (id)referStringForPad;
- (void)updateChannelType:;
- (BOOL)enable;
@end
