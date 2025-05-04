@interface AWEEcomSearchPendantHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)removeWithTargetPage:rit:component:;
+ (void)registerWithTargetPage:bizParams:;
+ (void)showWithTargetPage:container:bizParams:callback:;
+ (void)showWithTargetPage:container:jsonString:commonLogParams:extra:;
+ (void)showWithTargetPage:container:activityModel:commonLogParams:extra:;
+ (void)sendEvent:withTargetPage:params:;
+ (BOOL)enableNewStructWithActivityModel:;
@end
