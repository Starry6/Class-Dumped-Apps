@interface AWEInteractionAppointmentModel : AWEInteractionStickerModel
@property (nonatomic) AWEInteractionAppointmentStickerInfoModel appointmentInfo;
- (id)appointmentInfo;
- (void)setAppointmentInfo:;
- (BOOL)nativeSticker;
- (void).cxx_destruct;
+ (id)appointmentInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
