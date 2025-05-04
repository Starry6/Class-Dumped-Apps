@interface AWEStudioABTestInfoRegisterImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awe_registerBoolABTestCaseWithPropertyName:serverString:defaultValue:title:;
- (void)awe_registerNumberABTestCaseWithPropertyName:serverString:defaultValue:title:;
- (void)awe_registerStringABTestCaseWithPropertyName:serverString:defaultValue:;
@end
