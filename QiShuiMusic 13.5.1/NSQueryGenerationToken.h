@interface NSQueryGenerationToken : NSObject
- (BOOL)_isEnabled;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)currentQueryGenerationToken;
+ (id)unpinnedQueryGenerationToken;
+ (id)nostoresQueryGenerationToken;
@end
