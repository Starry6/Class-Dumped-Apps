@interface AWEFeedTagsView : UIView
@property (nonatomic) NSMutableArray URLs;
@property (nonatomic) NSMutableArray imageViewPool;
@property (nonatomic) double cachedContentSize;
@property (nonatomic) double tagViewWidth;
- (double)tagViewWidth;
- (void)setTagViewWidth:;
- (id)imageViewPool;
- (void)_configureViewWithURLs:;
- (void)_recycleImageView:;
- (id)_deququeImageView;
- (void)addImageURLAtEnd:;
- (void)removeURL:;
- (void)setImageViewPool:;
- (id)init;
- (id)intrinsicContentSize;
- (void)setURLs:;
- (id)URLs;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)cachedContentSize;
- (void)setCachedContentSize:;
- (void)addImageURL:;
- (void)setImageURLs:;
- (id)_createImageView;
+ (BOOL)enableLabelLargeFontAdapt;
@end
