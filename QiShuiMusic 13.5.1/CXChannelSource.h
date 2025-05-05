@interface CXChannelSource : CXAbstractProviderSource
@property (nonatomic) <CXChannelSourceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)handleAudioSessionActivationStateChangedTo:;
@end
