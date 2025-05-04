@interface AWEECommerceTagEntryView : UIView
@property (nonatomic) @? tappedBlock;
@property (nonatomic) UIImageView arrow;
@property (nonatomic) UILabel header;
@property (nonatomic) UILabel content;
@property (nonatomic) UIView separator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tappedBlock;
- (void)setTappedBlock:;
- (void)updateUIWithLabel:action:;
- (void)setupWithLabelData:;
- (id)header;
- (void)setSeparator:;
- (id)content;
- (id)separator;
- (id)initWithFrame:;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setHeader:;
- (void)setupUI;
- (id)arrow;
- (void)setArrow:;
- (void)viewTapped;
@end
