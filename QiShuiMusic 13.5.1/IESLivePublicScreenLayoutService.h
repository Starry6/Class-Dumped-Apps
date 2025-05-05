@interface IESLivePublicScreenLayoutService : IESLiveGeneralBaseService
@property (nonatomic) IESLivePublicScreenLayoutManager layoutManager;
- (void)serviceDidLaunch;
- (id)layoutManager;
- (void).cxx_destruct;
- (void)setLayoutManager:;
+ (void)ieslivekit_register_generalServiceAction;
+ (unsigned long long)serviceImmediateLoadTypes;
@end
