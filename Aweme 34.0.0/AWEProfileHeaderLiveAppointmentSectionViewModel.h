@interface AWEProfileHeaderLiveAppointmentSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) NSDictionary liveAnnounceInfoDict;
@property (nonatomic) BOOL isSubscribed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)liveModuleService;
- (void)configWithContext:;
- (void)setLiveAnnounceInfoDict:;
- (id)liveAnnounceInfoDict;
- (void)trackLiveAppointmentCardDidClickEvent;
- (void)changeSubscribeStatusAndShowToast;
- (void)trackLiveAppointmentCardDidClickSuccessEvent;
- (void)commomTrackLiveAppointmentCardParams:;
- (id)padService;
- (void)liveAppointmentCellDidShow:;
- (void)liveAppointmentBgViewDidClick:;
- (void)liveAppointmentCellDidClickRightButton:;
- (void)openLiveSchemaWithCardModel:;
- (void)trackLiveAppointmentCardDidShowEvent:;
- (BOOL)isSubscribed;
- (long long)sectionType;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setIsSubscribed:;
- (id)sectionSize;
@end
