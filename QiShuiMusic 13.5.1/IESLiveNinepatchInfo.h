@interface IESLiveNinepatchInfo : IESLiveDynamicMTLModel
@property (nonatomic) {UIEdgeInsets=dddd} flexSetting;
@property (nonatomic) {UIEdgeInsets=dddd} textSetting;
- (id)initWithFlexDictionary:;
- (id)initWithFlexSettingArray:textSettingArray:;
- (id)ninepatchSettingFromSettingArray:;
@end
