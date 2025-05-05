@interface IESECTabKitAnniePreProcessReq : NSObject
@property (nonatomic) NSString schema;
@property (nonatomic) NSString originUrl;
@property (nonatomic) NSArray globalPropsBlockList;
@property (nonatomic) NSDictionary customGlobalProps;
@property (nonatomic) NSDictionary initialData;
@property (nonatomic) NSDictionary routerParams;
@property (nonatomic) Q kernalType;
@property (nonatomic) BOOL enableAnnieXPreCreate;
- (void)setInitialData:;
- (id)customGlobalProps;
- (BOOL)enableAnnieXPreCreate;
- (id)globalPropsBlockList;
- (id)initialData;
- (unsigned long long)kernalType;
- (id)originUrl;
- (id)routerParams;
- (void)setCustomGlobalProps:;
- (void)setEnableAnnieXPreCreate:;
- (void)setGlobalPropsBlockList:;
- (void)setKernalType:;
- (void)setOriginUrl:;
- (void)setRouterParams:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
@end
