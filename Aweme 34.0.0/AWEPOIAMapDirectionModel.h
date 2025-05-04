@interface AWEPOIAMapDirectionModel : MTLModel
@property (nonatomic) NSString status;
@property (nonatomic) NSString info;
@property (nonatomic) NSString count;
@property (nonatomic) AWEPOIAMapDirectionRoute route;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setInfo:;
- (id)info;
- (void)setCount:;
- (void)setStatus:;
- (id)count;
- (void)setRoute:;
- (id)route;
- (void).cxx_destruct;
- (id)status;
+ (BOOL)automaticallyDefaultMapping;
@end
