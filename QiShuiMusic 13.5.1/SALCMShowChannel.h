@interface SALCMShowChannel : SABaseClientBoundCommand
@property (nonatomic) SALCMTvChannel channel;
- (void)setChannel:;
- (id)groupIdentifier;
- (id)channel;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)showChannel;
+ (id)showChannelWithDictionary:context:;
@end
