@interface WBSBookmarkFolderTouchIconProviderInfo : NSObject
@property (nonatomic) NSArray thumbnailImages;
@property (nonatomic) NSArray backgroundColors;
@property (nonatomic) UIImage touchIcon;
- (id)init;
- (id)touchIcon;
- (id)backgroundColors;
- (void).cxx_destruct;
- (id)thumbnailImages;
- (id)initWithThumbnailImages:backgroundColors:touchIcon:;
+ (id)new;
@end
