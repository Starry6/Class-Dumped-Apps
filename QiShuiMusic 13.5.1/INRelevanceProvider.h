@interface INRelevanceProvider : NSObject
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_init;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
