@interface AWENativeVideoContext : NSObject
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) UIImage coverImage;
@property (nonatomic) NSString coverImageUrl;
- (void)setCoverImage:;
- (id)coverImageUrl;
- (void)setCoverImageUrl:;
- (void)setCurrentPlaybackTime:;
- (void).cxx_destruct;
- (double)currentPlaybackTime;
- (id)coverImage;
@end
