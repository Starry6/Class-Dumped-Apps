@interface IESLiveGeneralServiceRegister : NSObject
@property (nonatomic) NSMutableArray serviceClasses;
- (void)loadActionRegistry;
- (id)serviceClasses;
- (void)setServiceClasses:;
- (id)init;
- (void).cxx_destruct;
- (id)registerClasses;
+ (id)register;
@end
