@interface AWEHPLeftSlideToUserGuideAlert : NSObject
@property (nonatomic) NSString componentID;
@property (nonatomic) @? canShowCallBack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (void)showWithContext:callbackWrapper:;
- (void)onAlertCanceledWithContext:;
- (void)setCanShowCallBack:;
- (id)canShowCallBack;
- (id)mr_accessIDForEvent:;
- (BOOL)mr_enableAccessControlForEvent:;
- (id)initWithComponentID:canShowCallBack:;
- (void).cxx_destruct;
- (void)setComponentID:;
- (id)componentID;
@end
