@interface IESLiveIMMessageChannel : IESLiveIMBaseChannel
@property (nonatomic) IESLiveIMExtraTransport extraLink;
@property (nonatomic) <IESLiveIMTransport> currentTransport;
@property (nonatomic) <IESLiveIMChannelDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)extraLink;
- (void)openLongLink;
- (void)setExtraLink:;
- (void)setupWithConfig:;
- (void)switchTransportWithRule:;
- (void)open;
- (void)close;
- (void).cxx_destruct;
@end
