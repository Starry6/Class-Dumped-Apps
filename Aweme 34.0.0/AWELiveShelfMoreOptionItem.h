@interface AWELiveShelfMoreOptionItem : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) NSString title;
@property (nonatomic) @? itemClickedBlock;
- (void)setItemClickedBlock:;
- (id)itemClickedBlock;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)initWithImage:title:;
@end
