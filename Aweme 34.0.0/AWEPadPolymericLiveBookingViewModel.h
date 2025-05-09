@interface AWEPadPolymericLiveBookingViewModel : NSObject
@property (nonatomic) NSString dateText;
@property (nonatomic) NSString timeLineText;
@property (nonatomic) NSString bookingBtnTitle;
@property (nonatomic) BOOL isBookingLoading;
@property (nonatomic) AWEPadLiveBookingModel model;
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString coverUrl;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) BOOL hasSubscribe;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (id)sectionViewModel;
- (void)setSectionViewModel:;
- (BOOL)hasSubscribe;
- (id)coverUrl;
- (void)trackToastShow:;
- (void)trackEvent:withExtraParams:;
- (void)onBookingBtnClicked:;
- (void)updateBookingBtnTitle;
- (void)trackPadAppointmentStatusWithEvent:ExtraParams:;
- (id)dateText;
- (void)gotoLiveRoomIfCan;
- (id)timeLineText;
- (void)setBookingBtnTitle:;
- (void)unBookingLive;
- (void)bookingLive;
- (void)trackEnterLive;
- (void)submitBookingLive;
- (void)trackBooking;
- (void)submitUnBookingLive;
- (void)trackUnBooking;
- (BOOL)isBookingLoading;
- (void)setIsBookingLoading:;
- (void)setTimeLineText:;
- (id)bookingBtnTitle;
- (void)setModel:;
- (id)roomID;
- (id)initWithModel:;
- (id)subTitle;
- (id)model;
- (void).cxx_destruct;
- (id)title;
- (void)setRoomID:;
- (void)setDateText:;
@end
