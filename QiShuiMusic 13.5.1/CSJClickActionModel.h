@interface CSJClickActionModel : NSObject
@property (nonatomic) q cta;
@property (nonatomic) q other;
- (long long)cta;
- (void)setCta:;
- (long long)ctaCheckDefaultValue:;
- (long long)otherCheckDefaultValue:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)other;
- (void)setOther:;
@end
