@interface AWETaskLiveAppointModel : AWEBaseApiModel
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary lynxRawData;
@property (nonatomic) NSString lynxButtonTemplateSchema;
@property (nonatomic) q newLearnMoreBtnPosition;
@property (nonatomic) q showLearnMoreAfterSeconds;
- (id)lynxRawData;
- (id)lynxButtonTemplateSchema;
- (long long)showLearnMoreAfterSeconds;
- (void)setShowLearnMoreAfterSeconds:;
- (void)setLynxRawData:;
- (void)setLynxButtonTemplateSchema:;
- (long long)newLearnMoreBtnPosition;
- (void)setNewLearnMoreBtnPosition:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
