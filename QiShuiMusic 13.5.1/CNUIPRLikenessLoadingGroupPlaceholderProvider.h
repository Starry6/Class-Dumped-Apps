@interface CNUIPRLikenessLoadingGroupPlaceholderProvider : CNUIPRLikenessLoadingPlaceholderProvider
@property (nonatomic) Q backgroundStyle;
- (unsigned long long)backgroundStyle;
- (id)initWithBackgroundStyle:;
- (id)renderRoundedRectImageForSize:scale:;
- (id)renderCircularImageForSize:scale:;
@end
