@interface ASCScreenshots : NSObject
@property (nonatomic) ASCMediaPlatform mediaPlatform;
@property (nonatomic) NSArray artwork;
- (id)artwork;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithArtwork:mediaPlatform:;
- (id)mediaPlatform;
+ (BOOL)supportsSecureCoding;
@end
