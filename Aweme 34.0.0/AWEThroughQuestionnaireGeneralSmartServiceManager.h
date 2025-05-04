@interface AWEThroughQuestionnaireGeneralSmartServiceManager : HTSService
@property (nonatomic) NSMutableDictionary serviceMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serviceMap;
- (id)serviceKeyFormType:referString:;
- (id)setupServiceWithType:configBuilder:;
- (id)getServiceWithType:referString:;
- (void)setServiceMap:;
- (id)init;
- (void).cxx_destruct;
@end
