@interface AWEIMGroupAvatarMergeHelper : NSObject
@property (nonatomic) double imageSize;
- (id)initWithImageWidthAndHeight:;
- (id)__userAvatarImageWithUID:;
- (id)__singleGroupAddIcon;
- (id)mergeFirstImage:secondImage:mergeType:;
- (id)__createCircleImageWithImage:;
- (id)createCircularCutoutImageFromImage:withRect:;
- (id)groupImageWithFirstUID:secondUID:mergeType:;
- (id)init;
- (double)borderWidth;
- (double)origin;
- (void)setImageSize:;
- (double)imageSize;
@end
