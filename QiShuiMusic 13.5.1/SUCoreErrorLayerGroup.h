@interface SUCoreErrorLayerGroup : NSObject
@property (nonatomic) q errorLayer;
@property (nonatomic) NSString domain;
@property (nonatomic) q minCode;
@property (nonatomic) q maxCode;
@property (nonatomic) q indications;
@property (nonatomic) NSString keyMatchTrue;
@property (nonatomic) NSDictionary keyMatchTrueMap;
- (id)keyMatchTrue;
- (long long)maxCode;
- (long long)minCode;
- (void)setKeyMatchTrueMap:;
- (id)initForLayer:withDomain:;
- (id)keyMatchTrueMap;
- (id)summary;
- (long long)indications;
- (id)initForLayer:withDomain:minCode:maxCode:indicating:ifKeyTrue:keyMatchTrueMap:;
- (void).cxx_destruct;
- (id)initForLayer:withDomain:minCode:maxCode:;
- (id)description;
- (long long)errorLayer;
- (id)domain;
- (void)setKeyMatchTrue:;
- (void)setIndications:;
@end
