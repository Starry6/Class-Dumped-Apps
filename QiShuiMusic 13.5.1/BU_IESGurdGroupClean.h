@interface BU_IESGurdGroupClean : NSObject
@property (nonatomic) q rule;
@property (nonatomic) q policy;
@property (nonatomic) q limit;
- (long long)rule;
- (void)setPolicy:;
- (long long)limit;
- (long long)policy;
- (void)setLimit:;
- (void)setRule:;
+ (id)cleanWithDictionary:;
@end
