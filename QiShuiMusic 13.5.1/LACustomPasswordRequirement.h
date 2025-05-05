@interface LACustomPasswordRequirement : NSObject
- (void).cxx_destruct;
- (void)encodeWithACLCoder:;
- (id)initWithCustomPassword:;
+ (void)requestCreationWithLocalizedReason:completion:;
@end
