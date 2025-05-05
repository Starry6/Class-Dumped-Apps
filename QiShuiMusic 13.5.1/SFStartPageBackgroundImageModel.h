@interface SFStartPageBackgroundImageModel : NSObject
@property (nonatomic) WBSStartPageBackgroundImageDescription imageDescription;
@property (nonatomic) NSItemProvider itemProvider;
@property (nonatomic) BOOL isCustomImage;
@property (nonatomic) BOOL selected;
- (unsigned long long)hash;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (id)description;
- (id)itemProvider;
- (BOOL)isEqual:;
- (id)initWithItemProvider:;
- (id)imageDescription;
- (id)initWithIndex:inDataSource:selected:;
- (void)getThumbnailImageWithCompletionHandler:;
- (BOOL)isCustomImage;
@end
