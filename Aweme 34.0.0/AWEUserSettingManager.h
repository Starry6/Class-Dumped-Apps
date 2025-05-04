@interface AWEUserSettingManager : NSObject
@property (nonatomic) AWEIMSettingModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerIMSettingModelUpdateMessage;
- (void)didUpdateIMSetting:source:currentModel:;
- (id)dynamicCoverConsumerSettingHasModifyKey;
- (void)coldStartOrLoginAction;
- (void)setDynamicCoverConsumerSettingIfNeeded;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
