@interface AWEIronManLandingPageBaseRouterModel : MTLModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString logExtra;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtra:;
- (id)logExtra;
- (id)trackParams;
- (id)routerURLStringWithEnterFromType:bdpExtra:;
- (id)entranceContextWithEnterFromType:bdpExtra:entranceExtra:;
- (id)routerURLStringWithEnterFromType:bdpExtra:entranceExtra:;
- (id)processEntranceExtraDict:;
- (id)schema;
- (void)setSchema:;
- (id)location;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
@end
