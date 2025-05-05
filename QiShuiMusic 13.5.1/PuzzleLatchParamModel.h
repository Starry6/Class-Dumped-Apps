@interface PuzzleLatchParamModel : NSObject
@property (nonatomic) UIView<IESLiveHybridContainerProtocol> realContainer;
@property (nonatomic) NSString latchID;
@property (nonatomic) NSString url;
@property (nonatomic) NSDictionary globalProps;
@property (nonatomic) NSDictionary initialProps;
- (id)latchID;
- (void)setGlobalProps:;
- (id)globalProps;
- (id)initialProps;
- (id)realContainer;
- (void)setInitialProps:;
- (void)setLatchID:;
- (void)setRealContainer:;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
@end
