@interface UIActivityItemImageRep : NSObject
@property (nonatomic) @ asset;
@property (nonatomic) @? thumbnailProvider;
@property (nonatomic) @? dataProvider;
- (id)dataProvider;
- (id)data;
- (id)asset;
- (void)setDataProvider:;
- (id)thumbnail;
- (void).cxx_destruct;
- (void)setAsset:;
- (id)thumbnailProvider;
- (void)setThumbnailProvider:;
+ (id)activityItemImageRepWithAsset:thumbnailProvider:dataProvider:;
@end
