@interface IESECLiveLynxManager : NSObject
@property (nonatomic) IESECLiveContext liveContext;
- (void)setLiveContext:;
- (id)genLynxViewWithModel:frame:;
- (id)initWithLiveContext:;
- (id)liveContext;
- (void).cxx_destruct;
@end
