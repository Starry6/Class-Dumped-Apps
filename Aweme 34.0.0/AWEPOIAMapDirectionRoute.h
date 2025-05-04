@interface AWEPOIAMapDirectionRoute : MTLModel
@property (nonatomic) NSString origin;
@property (nonatomic) NSString destination;
@property (nonatomic) NSArray paths;
@property (nonatomic) NSArray transits;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transits;
- (void)setTransits:;
- (void)setPaths:;
- (void)setOrigin:;
- (id)paths;
- (void)setDestination:;
- (id)destination;
- (id)origin;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)pathsJSONTransformer;
+ (id)transitsJSONTransformer;
@end
