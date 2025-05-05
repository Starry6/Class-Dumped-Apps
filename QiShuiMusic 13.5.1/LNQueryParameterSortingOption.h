@interface LNQueryParameterSortingOption : NSObject
@property (nonatomic) NSString parameterIdentifier;
@property (nonatomic) q order;
@property (nonatomic) NSNumber sortParameterIndex;
- (long long)order;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)parameterIdentifier;
- (id)initWithOrder:sortParameterIndex:;
- (id)sortParameterIndex;
- (id)initWithOrder:parameterIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
