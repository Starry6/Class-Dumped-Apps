@interface ASCTrailers : NSObject
@property (nonatomic) ASCMediaPlatform mediaPlatform;
@property (nonatomic) NSArray videos;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)videos;
- (id)mediaPlatform;
- (id)initWithVideos:mediaPlatform:;
+ (BOOL)supportsSecureCoding;
@end
