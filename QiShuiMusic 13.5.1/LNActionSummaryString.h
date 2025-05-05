@interface LNActionSummaryString : NSObject
@property (nonatomic) NSString formatString;
@property (nonatomic) NSArray parameterIdentifiers;
- (id)formatString;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithFormatString:parameterIdentifiers:;
- (id)parameterIdentifiers;
+ (BOOL)supportsSecureCoding;
@end
