@interface AWEIMSkylightBizDataDirector : NSObject
@property (nonatomic) AWEIMSkylightAvatarDataBuilder friendsAvatarDataBuilder;
@property (nonatomic) AWEIMSkylightSettingDataBuilder settingBuilder;
@property (nonatomic) NSDictionary registerBizBuilderDict;
@property (nonatomic) <AWEIMSkylightDataBizBuilderProtocol> commonBizBuilder;
- (id)constructSectionDataWithContext:;
- (id)setupRegisterBizBuilderDict;
- (id)constructBizViewModelsWithContext:;
- (id)friendsAvatarDataBuilder;
- (id)settingBuilder;
- (id)p_constructBizViewModelsWithContext:;
- (id)registerBizBuilderDict;
- (id)commonBizBuilder;
- (void)setFriendsAvatarDataBuilder:;
- (void)setSettingBuilder:;
- (void)setRegisterBizBuilderDict:;
- (void)setCommonBizBuilder:;
- (id)init;
- (void).cxx_destruct;
+ (void)postProcessSectionDataIfNeeded:;
@end
