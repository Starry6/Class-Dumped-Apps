@interface TTVideoEnginePlayItem : NSObject
@property (nonatomic) NSString playURL;
@property (nonatomic) NSString vid;
@property (nonatomic) Q resolution;
@property (nonatomic) q expire;
- (void)setVid:;
- (id)vid;
- (id)init;
- (long long)expire;
- (BOOL)isExpired;
- (void)setResolution:;
- (unsigned long long)resolution;
- (void)setExpire:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)playURL;
- (void)setPlayURL:;
+ (BOOL)supportsSecureCoding;
@end
