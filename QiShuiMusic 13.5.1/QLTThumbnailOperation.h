@interface QLTThumbnailOperation : QLThumbnailRequestOperation
@property (nonatomic) UIImage image;
@property (nonatomic) NSError error;
@property (nonatomic) @? needsAdditionalTime;
- (id)error;
- (void).cxx_destruct;
- (id)image;
- (id)needsAdditionalTime;
- (void)setNeedsAdditionalTime:;
@end
