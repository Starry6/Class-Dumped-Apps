@interface ISIconCacheConfiguration : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSString sandboxExtension;
@property (nonatomic) NSString salt;
- (id)url;
- (id)initWithCoder:;
- (id)salt;
- (void)setUrl:;
- (void)encodeWithCoder:;
- (void)setSalt:;
- (void).cxx_destruct;
- (id)sandboxExtension;
- (void)setSandboxExtension:;
+ (BOOL)supportsSecureCoding;
@end
