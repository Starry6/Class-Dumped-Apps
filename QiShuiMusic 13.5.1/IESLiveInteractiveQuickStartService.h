@interface IESLiveInteractiveQuickStartService : NSObject
@property (nonatomic) HTSLiveRoom room;
@property (nonatomic) IESLiveInteractiveQuickStartAPI api;
@property (nonatomic) @? monitorBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithRoom:;
- (void)dealWithInitResponse:error:model:completion:;
- (BOOL)isValidResponse:error:;
- (id)monitorBlock;
- (void)monitorWithAPIPath:requestTime:response:error:extra:;
- (void)quickStartMultiAudioWithScene:requestSource:extraParam:completion:;
- (void)setMonitorBlock:;
- (void)traceWithName:step:extra:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)api;
- (id)initWithRoom:;
- (void)setApi:;
@end
