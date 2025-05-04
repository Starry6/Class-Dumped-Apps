@interface AWEPostPageRegisterTool : NSObject
@property (nonatomic) NSMutableSet elementSet;
@property (nonatomic) NSMutableDictionary serviceDict;
@property (nonatomic) NSMutableDictionary defaultServiceDict;
@property (nonatomic) NSMutableDictionary bindElementServiceDict;
@property (nonatomic) NSSet registeredElements;
@property (nonatomic) NSDictionary registeredServices;
@property (nonatomic) NSDictionary registeredDefaultServices;
@property (nonatomic) NSDictionary bindElementServices;
- (id)elementSet;
- (void)setElementSet:;
- (void)registerElementClass:;
- (void)registerServiceProvider:forProtocol:bindElementClass:;
- (id)bindElementServices;
- (id)registeredDefaultServices;
- (void)registerServiceProvider:forProtocol:bindElementClass:isDefault:;
- (id)defaultServiceDict;
- (id)bindElementServiceDict;
- (void)clearRegisteredInfo;
- (void)setDefaultServiceDict:;
- (void)setBindElementServiceDict:;
- (id)init;
- (void).cxx_destruct;
- (void)setServiceDict:;
- (id)serviceDict;
- (id)registeredElements;
- (id)registeredServices;
+ (id)shared;
@end
