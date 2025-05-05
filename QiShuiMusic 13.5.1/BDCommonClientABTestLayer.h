@interface BDCommonClientABTestLayer : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray groups;
@property (nonatomic) NSDictionary filters;
- (BOOL)isLegal;
- (id)initWithName:groups:;
- (id)filters;
- (id)groups;
- (void)setGroups:;
- (void)setFilters:;
- (void).cxx_destruct;
- (id)name;
@end
