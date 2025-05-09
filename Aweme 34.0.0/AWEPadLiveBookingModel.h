@interface AWEPadLiveBookingModel : MTLModel
@property (nonatomic) NSNumber status;
@property (nonatomic) AWEPadLiveBookingConfig configInfo;
@property (nonatomic) q bookingId;
@property (nonatomic) q anchorId;
@property (nonatomic) BOOL hasSubscribe;
@property (nonatomic) NSString room;
@property (nonatomic) Q timeLineStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasSubscribe;
- (long long)anchorId;
- (void)setAnchorId:;
- (void)setHasSubscribe:;
- (unsigned long long)timeLineStyle;
- (void)setTimeLineStyle:;
- (void)setStatus:;
- (void).cxx_destruct;
- (id)status;
- (id)room;
- (void)setRoom:;
- (id)configInfo;
- (long long)bookingId;
- (void)setBookingId:;
- (void)setConfigInfo:;
+ (id)configInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
