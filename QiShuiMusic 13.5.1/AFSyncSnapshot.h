@interface AFSyncSnapshot : NSObject
@property (nonatomic) NSString anchor;
@property (nonatomic) NSString validity;
@property (nonatomic) q count;
@property (nonatomic) NSString key;
- (void)setCount:;
- (id)anchor;
- (id)key;
- (id)initWithCoder:;
- (void)setAnchor:;
- (void)setValidity:;
- (void)setKey:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)validity;
- (long long)count;
+ (BOOL)supportsSecureCoding;
@end
