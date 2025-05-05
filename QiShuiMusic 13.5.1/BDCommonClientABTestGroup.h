@interface BDCommonClientABTestGroup : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q minRegion;
@property (nonatomic) q maxRegion;
@property (nonatomic) NSDictionary results;
- (BOOL)isLegal;
- (id)initWithName:minRegion:maxRegion:results:;
- (long long)maxRegion;
- (long long)minRegion;
- (id)results;
- (void).cxx_destruct;
- (id)name;
@end
