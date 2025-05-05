@interface FFFeatureAttribute : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString value;
- (void)setName:;
- (id)initWithName:value:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)name;
- (BOOL)matchesAgainst:;
@end
