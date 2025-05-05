@interface IESLiveMultiAudioAudienceApplyParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber mode;
@property (nonatomic) NSNumber position;
@property (nonatomic) BOOL afterFollow;
@property (nonatomic) NSString sourcePage;
@property (nonatomic) NSNumber applySource;
@property (nonatomic) NSString clickSource;
@property (nonatomic) NSNumber paidCount;
@property (nonatomic) NSNumber limitTime;
@property (nonatomic) NSString reason;
+ (id)modelCustomPropertyMapper;
@end
