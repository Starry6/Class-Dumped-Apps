@interface AWEPOIModuleServiceDOUYINAdaper : NSObject
@property (nonatomic) BOOL enableIM;
@property (nonatomic) BOOL haveSaaS;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableIM;
- (BOOL)haveSaaS;
- (void)trackADEventAfterClickAnchorWithAweme:referString:entranceType:;
- (void)trackADEventAfterClickOrSlideUserAvatarWithAweme:referString:;
- (void)trackAdEventWithLabelWithModel:name:;
- (void)trackADEventAfterClickAnchorWithModel:referString:entranceType:;
- (id)weakTarget;
+ (Class)weakTargetClass;
@end
