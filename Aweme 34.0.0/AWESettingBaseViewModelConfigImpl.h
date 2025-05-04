@interface AWESettingBaseViewModelConfigImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWESettingBaseViewModel weakObject;
- (id)settingItemModelWithType:registerAtViewModel:;
- (void)listControlDidChange;
- (id)init;
- (void)dealloc;
- (id)weakObject;
- (void).cxx_destruct;
- (void)setWeakObject:;
+ (void)_aweLazyRegisterLoad;
+ (void)configInit;
@end
