@interface SAWLWatchListPlayable : AceObject
@property (nonatomic) SAWLWatchListChannelDetails channelDetails;
@property (nonatomic) BOOL entitled;
@property (nonatomic) BOOL installed;
@property (nonatomic) NSURL playURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setEntitled:;
- (id)encodedClassName;
- (BOOL)installed;
- (void)setInstalled:;
- (BOOL)entitled;
- (id)channelDetails;
- (void)setChannelDetails:;
- (id)playURL;
- (void)setPlayURL:;
+ (id)watchListPlayable;
+ (id)watchListPlayableWithDictionary:context:;
@end
