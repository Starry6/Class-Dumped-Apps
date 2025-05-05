@interface IESECRelationActivityDynamicComponentShowRule : MTLModel
@property (nonatomic) Q period;
@property (nonatomic) NSString scene;
@property (nonatomic) Q action;
@property (nonatomic) Q limit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)limit;
- (void)setScene:;
- (unsigned long long)action;
- (id)scene;
- (void)setLimit:;
- (void)setAction:;
- (void).cxx_destruct;
- (unsigned long long)period;
- (void)setPeriod:;
+ (id)JSONKeyPathsByPropertyKey;
@end
