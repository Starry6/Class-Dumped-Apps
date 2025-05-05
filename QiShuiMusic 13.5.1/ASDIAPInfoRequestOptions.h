@interface ASDIAPInfoRequestOptions : ASDRequestOptions
@property (nonatomic) NSArray adamIds;
- (id)adamIds;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithAdamIds:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
