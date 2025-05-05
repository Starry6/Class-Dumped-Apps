@interface IESLiveMultiResouceImage : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) NSArray urls;
- (BOOL)isEmpty;
- (id)urls;
- (void)setImage:;
- (void)setUrls:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)image;
- (void)applyToImageView:;
@end
