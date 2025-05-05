@interface TTVideoEngineVideoInfo : NSObject
@property (nonatomic) NSString vid;
@property (nonatomic) Q resolution;
@property (nonatomic) q expire;
@property (nonatomic) TTVideoEnginePlayInfo playInfo;
- (void)setVid:;
- (id)vid;
- (BOOL)hasPlayURL;
- (BOOL)isString:EqualToString:;
- (id)playInfo;
- (void)setPlayInfo:;
- (long long)expire;
- (BOOL)isExpired;
- (void)setResolution:;
- (unsigned long long)resolution;
- (void)setExpire:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)codecType;
+ (BOOL)supportsSecureCoding;
@end
