@interface BDXBridgeAuthRule : NSObject
@property (nonatomic) NSString pattern;
@property (nonatomic) q group;
@property (nonatomic) NSArray includedMethods;
@property (nonatomic) NSArray excludedMethods;
- (id)excludedMethods;
- (id)includedMethods;
- (id)initWithPattern:group:;
- (void)setExcludedMethods:;
- (void)setIncludedMethods:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)setGroup:;
- (id)pattern;
- (long long)group;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setPattern:;
@end
