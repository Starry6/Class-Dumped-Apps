@interface AFDisambiguationInfo : NSObject
@property (nonatomic) q version;
@property (nonatomic) NSArray history;
- (id)init;
- (long long)version;
- (id)history;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setHistory:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
