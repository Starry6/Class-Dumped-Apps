@interface IESLiveSaaSAppointmentHostSubscribeResponse : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSHostSubscribeAppointmentData data;
@property (nonatomic) IESLiveSaaSAppointmentHostSubscribeExtra extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)dataJSONTransformer;
+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
