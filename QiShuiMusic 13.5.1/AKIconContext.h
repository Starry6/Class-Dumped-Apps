@interface AKIconContext : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSNumber scale;
@property (nonatomic) Q maskingStyle;
@property (nonatomic) NSString appName;
- (id)init;
- (void)setScale:;
- (id)data;
- (id)initWithCoder:;
- (void)setAppName:;
- (id)appName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setData:;
- (id)scale;
- (unsigned long long)maskingStyle;
- (void)setMaskingStyle:;
+ (BOOL)supportsSecureCoding;
@end
