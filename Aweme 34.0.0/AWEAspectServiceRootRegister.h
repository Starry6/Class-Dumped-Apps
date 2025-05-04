@interface AWEAspectServiceRootRegister : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)AWEAspectRegister;
+ (void)_aweLazyRegisterStaticLoad_AspectExecute;
+ (void)execute;
@end
