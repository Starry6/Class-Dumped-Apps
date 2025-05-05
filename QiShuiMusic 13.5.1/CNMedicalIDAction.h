@interface CNMedicalIDAction : CNPropertyAction
@property (nonatomic) q medicalIDActionType;
@property (nonatomic) CNContact contact;
@property (nonatomic) CNHealthStoreManager healthStoreManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)healthStoreManager;
- (void)setHealthStoreManager:;
- (void).cxx_destruct;
- (void)performActionWithSender:;
- (void)medicalIDViewControllerDidCancel:;
- (void)medicalIDViewControllerDidSave:;
- (void)medicalIDViewControllerDidDelete:;
- (void)medicalIDViewControllerDidFinish:;
- (long long)medicalIDActionType;
- (void)setMedicalIDActionType:;
@end
