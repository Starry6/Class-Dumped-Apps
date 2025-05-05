@interface BDTemplateUtils : NSObject
+ (id)JSONRepresentation:;
+ (void)checkUsability:completion:;
+ (id)contentDatawithDetail:extra:;
+ (id)contentReadyParamsWithKey:fallbackURL:tags:sessionID:code:;
+ (id)findSubViews:inView:;
+ (id)UUIDString;
@end
