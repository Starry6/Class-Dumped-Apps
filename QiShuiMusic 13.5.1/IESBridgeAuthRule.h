@interface IESBridgeAuthRule : NSObject
@property (nonatomic) NSString pattern;
@property (nonatomic) Q group;
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
- (unsigned long long)group;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setPattern:;
@end
