@interface AWETheaterMoreFeedSectionItemAppointmentInfo : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) AWEURLModel playerCover;
@property (nonatomic) AWEURLModel metaCover;
@property (nonatomic) AWELVideoAppointmentInfoModel appointmentInfoModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)playerCover;
- (id)appointmentInfoModel;
- (void)setAppointmentInfoModel:;
- (id)metaCover;
- (void)setPlayerCover:;
- (void)setMetaCover:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)playerCoverJSONTransformer;
+ (id)metaCoverJSONTransformer;
+ (id)appointmentInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
