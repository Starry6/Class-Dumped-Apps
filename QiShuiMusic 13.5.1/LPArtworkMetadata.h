@interface LPArtworkMetadata : NSObject
@property (nonatomic) I version;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSDictionary colors;
- (id)colors;
- (void)setColors:;
- (id)init;
- (unsigned int)version;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setURL:;
- (id)URL;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
