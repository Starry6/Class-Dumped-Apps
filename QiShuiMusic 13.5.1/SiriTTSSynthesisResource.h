@interface SiriTTSSynthesisResource : NSObject
@property (nonatomic) NSString language;
@property (nonatomic) q version;
@property (nonatomic) NSString description;
- (id)init;
- (void)setLanguage:;
- (id)language;
- (void)setVersion:;
- (long long)version;
- (id)initWithCoder:;
- (id)initWithLanguage:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
+ (BOOL)supportsSecureCoding;
+ (void)setSupportsSecureCoding:;
@end
