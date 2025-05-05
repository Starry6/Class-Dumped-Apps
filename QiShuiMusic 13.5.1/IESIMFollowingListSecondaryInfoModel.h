@interface IESIMFollowingListSecondaryInfoModel : IESIMBaseApiModel
@property (nonatomic) Q infoPriority;
@property (nonatomic) NSString subInfoText;
@property (nonatomic) Q subInfoTextType;
- (void)setSubInfoText:;
- (unsigned long long)subInfoTextType;
- (unsigned long long)infoPriority;
- (void)setInfoPriority:;
- (void)setSubInfoTextType:;
- (id)subInfoText;
- (void).cxx_destruct;
+ (id)infoPriorityJSONTransformer;
+ (id)subInfoTextTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
