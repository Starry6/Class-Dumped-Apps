@interface TTVideoEngineSeekTS : NSObject
@property (nonatomic) double opening_ver2;
@property (nonatomic) double ending_ver2;
@property (nonatomic) q apiVer;
@property (nonatomic) double opening;
@property (nonatomic) double ending;
- (void)setEnding_ver2:;
- (long long)apiVer;
- (double)ending;
- (double)ending_ver2;
- (double)getValueFloat:;
- (double)opening_ver2;
- (void)setApiVer:;
- (void)setEnding:;
- (void)setOpening:;
- (void)setOpening_ver2:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (double)opening;
+ (BOOL)supportsSecureCoding;
@end
