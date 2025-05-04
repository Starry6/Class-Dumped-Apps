@interface AWECommentImageData : NSObject
@property (nonatomic) UIImage placeHolderImage;
@property (nonatomic) AWECommentModel commentModel;
@property (nonatomic) AWECommentImageModel imageModel;
@property (nonatomic) NSArray commentModelsList;
@property (nonatomic) NSArray imageModelsList;
- (id)commentModel;
- (void)setCommentModel:;
- (id)imageModel;
- (void)setImageModel:;
- (id)commentModelsList;
- (void)setCommentModelsList:;
- (id)imageModelsList;
- (void)setImageModelsList:;
- (void).cxx_destruct;
- (id)placeHolderImage;
- (void)setPlaceHolderImage:;
@end
