@interface IESIMTaskLiveAppointModel : IESIMBaseApiModel
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary lynxRawData;
@property (nonatomic) NSString lynxButtonTemplateSchema;
@property (nonatomic) q newLearnMoreBtnPosition;
@property (nonatomic) q showLearnMoreAfterSeconds;
- (void)setLynxRawData:;
- (id)lynxButtonTemplateSchema;
- (id)lynxRawData;
- (long long)newLearnMoreBtnPosition;
- (void)setLynxButtonTemplateSchema:;
- (void)setNewLearnMoreBtnPosition:;
- (void)setShowLearnMoreAfterSeconds:;
- (long long)showLearnMoreAfterSeconds;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
