@interface AWELiveRoomLinkNativePreParamSetTask : IESLiveLinkTask
@property (nonatomic) AWELiveRoomLinkNativeEnterPreParam enterParam;
- (void)addBusinessParamsWithRoomAisle:businessParams:;
- (void)p_updateADParamsOFRoomAisle:roomLog:;
- (void)p_updateBusinessOFRoomAisle:roomLog:defaultRoom:;
- (void)p_generateTrackParamsOFRoomAisle:roomLog:defaultRoom:;
- (void)p_generateEnterRoomFirstShowParamsOFRoomAisle:roomLog:defaultRoom:;
- (BOOL)p_isLiveWithParams:;
- (BOOL)p_isVSRoomWithRoom:;
- (BOOL)p_enableDrawVSWithParams:;
- (id)cityName:;
- (long long)ecomLivecouponMateIdWithDefaultRoom:;
- (id)p_generateMutableContextParamsWithRoomLog:defaultRoom:;
- (id)p_generateFirstShowParamsWithRoomLog:defaultRoom:;
- (id)p_generateClickPramasWithRoomLog:defaultRoom:;
- (void)p_generateVSParamsOFRoomAisle:roomLog:defaultRoom:;
- (BOOL)p_isVSLiveRoomWithRoom:;
- (BOOL)p_isVSFirstPlayRoomWithRoom:;
- (void)setEnterParam:;
- (id)enterParam;
- (void)updateContextParam:;
- (void)run;
- (void).cxx_destruct;
@end
