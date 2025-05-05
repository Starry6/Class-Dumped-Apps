@interface MPPlaybackArchiveConfiguration : NSObject
@property (nonatomic) {CGSize=dd} preferredArtworkSize;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithPreferredArtworkSize:;
- (id)preferredArtworkSize;
- (void)setPreferredArtworkSize:;
+ (BOOL)supportsSecureCoding;
@end
