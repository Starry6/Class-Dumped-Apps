@interface AWEPublishSettingServiceImpl : NSObject
@property (nonatomic) NSMapTable dataControllerMap;
@property (nonatomic) NSMapTable privacySettingHandlerMap;
@property (nonatomic) NSMutableDictionary shortPathDataControllerDict;
@property (nonatomic) NSMutableDictionary shortPathPrivacySettingHandlerDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getAndRegisterPrivacySettingHandlerWithPublishModel:;
- (void)publishPrivacySettingHandler:didChangeWithInfo:;
- (id)getAndRegisterAdvanceSettingDataControllerWithPublishModel:;
- (void)unregisterPrivacySettingHandlerAndDataControllerWithPublishModel:;
- (void)unregisterAdvanceSettingDataControllerWithPublishModel:;
- (void)configPrivacySettingHandlerAndDataControllerWithPublishModel:;
- (void)unregisterPrivacySettingHandlerWithPublishModel:;
- (id)shortPathPrivacySettingHandlerDict;
- (id)privacySettingHandlerMap;
- (id)shortPathDataControllerDict;
- (id)dataControllerMap;
- (void)setDataControllerMap:;
- (void)setPrivacySettingHandlerMap:;
- (void)setShortPathDataControllerDict:;
- (void)setShortPathPrivacySettingHandlerDict:;
- (void).cxx_destruct;
@end
