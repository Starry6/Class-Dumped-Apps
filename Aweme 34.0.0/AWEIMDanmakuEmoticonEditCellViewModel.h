@interface AWEIMDanmakuEmoticonEditCellViewModel : NSObject
@property (nonatomic) AWEIMDanmakuEmoticonBackgroundImageConfig config;
@property (nonatomic) NSURL url;
@property (nonatomic) UIImage placeholder;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) {CGSize=dd} itemSize;
@property (nonatomic) BOOL isSelected;
- (void)setConfig:;
- (void)setIsSelected:;
- (void)setUrl:;
- (id)initWithConfig:;
- (id)config;
- (void)setPlaceholder:;
- (BOOL)isSelected;
- (id)placeholder;
- (void).cxx_destruct;
- (void)setImageSize:;
- (id)imageSize;
- (id)url;
- (id)itemSize;
- (void)setItemSize:;
@end
