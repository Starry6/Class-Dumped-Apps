@interface SSVCookieKey : NSObject
@property (nonatomic) NSNumber identifier;
@property (nonatomic) q scope;
- (void)setScope:;
- (long long)scope;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)copyWithZone:;
+ (id)keyWithIdentifier:scope:;
@end
