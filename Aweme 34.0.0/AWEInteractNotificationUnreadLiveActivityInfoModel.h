@interface AWEInteractNotificationUnreadLiveActivityInfoModel : IESIMBaseApiModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSNumber textSize;
@property (nonatomic) NSString backgrounColorString;
@property (nonatomic) IESIMURLModel liveImage;
- (id)liveImage;
- (void)setLiveImage:;
- (id)backgrounColorString;
- (void)setBackgrounColorString:;
- (void)setText:;
- (id)text;
- (void)setTextColor:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)textColor;
- (id)textSize;
- (void)setTextSize:;
+ (id)instanceWithJSONDictionary:;
+ (id)liveImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
