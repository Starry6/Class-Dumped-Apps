@interface IESLiveGiftFragmentIconImageInfo : IESLiveDynamicModel
@property (nonatomic) NSString localImageName;
@property (nonatomic) BOOL showWebImage;
@property (nonatomic) NSString webImageUrl;
@property (nonatomic) double webImageSize;
- (void)setWebImageSize:;
- (double)webImageSize;
@end
