@interface PAAccessMatcher : NSObject
@property (nonatomic) PAAccess access;
@property (nonatomic) Q options;
- (id)access;
- (unsigned long long)hash;
- (id)initWithAccess:options:;
- (unsigned long long)options;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)negativeAccessCacheMatcherForAccess:;
+ (id)coalescingMatcherForAccess:;
@end
