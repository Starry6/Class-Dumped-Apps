@interface AWEIMShortcutEmoticonCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIButton emoticonButton;
@property (nonatomic) IESIMSaaSEmoticonModel model;
@property (nonatomic) @? block;
- (void)didSelectEmotIconAction;
- (id)emoticonButton;
- (void)renderModel:;
- (void)setEmoticonButton:;
- (void)setSelectEmotIconBlock:;
- (id)model;
- (id)block;
- (void)setModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setBlock:;
@end
