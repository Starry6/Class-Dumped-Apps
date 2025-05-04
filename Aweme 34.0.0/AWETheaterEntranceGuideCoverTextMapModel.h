@interface AWETheaterEntranceGuideCoverTextMapModel : AWEBaseApiModel
@property (nonatomic) AWETheaterEntranceGuideCoverTextModel appointment;
@property (nonatomic) AWETheaterEntranceGuideCoverTextModel collection;
@property (nonatomic) AWETheaterEntranceGuideCoverTextModel theaterChannel;
- (id)appointment;
- (void)setAppointment:;
- (id)theaterChannel;
- (void)setTheaterChannel:;
- (void)setCollection:;
- (id)collection;
- (void).cxx_destruct;
+ (id)collectionJSONTransformer;
+ (id)appointmentJSONTransformer;
+ (id)theaterChannelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
