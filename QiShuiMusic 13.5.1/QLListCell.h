@interface QLListCell : UITableViewCell
@property (nonatomic) QLItem item;
@property (nonatomic) NSString folderName;
@property (nonatomic) q fileDepthLevel;
@property (nonatomic) NSString subtitleString;
@property (nonatomic) UIImage thumbnail;
@property (nonatomic) Q row;
- (void)setThumbnail:;
- (id)item;
- (void)awakeFromNib;
- (unsigned long long)row;
- (void)prepareForReuse;
- (void)setItem:;
- (id)thumbnail;
- (void).cxx_destruct;
- (id)subtitleString;
- (void)setSubtitleString:;
- (void)setRow:;
- (id)folderName;
- (void)setFolderName:;
- (id)_folderImage;
- (void)setFileDepthLevel:;
- (long long)fileDepthLevel;
+ (id)listCell;
@end
