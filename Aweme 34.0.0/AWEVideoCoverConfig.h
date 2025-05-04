@interface AWEVideoCoverConfig : NSObject
+ (long long)numberOfCellsPerRow;
+ (double)previewTopPadding;
+ (double)previewTopMargin;
+ (double)buttonCenterYOffset;
+ (id)cropImage:offset:;
+ (double)cellWidth;
+ (double)cellHeight;
+ (double)bottomHeight;
+ (id)ratio;
+ (id)cropImage:;
@end
