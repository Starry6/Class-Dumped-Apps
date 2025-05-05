@interface CSJVideoBottomMask : UIView
@property (nonatomic) CSJMaterialMeta materialMeta;
@property (nonatomic) CSJAdSlot slot;
@property (nonatomic) UIButton downloadButton;
@property (nonatomic) <CSJCSJVideoBottomMaskClickDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)buildUpView;
- (id)c_xyDict;
- (id)initWithMaterialMeta:slot:;
- (void)maskTapped;
- (id)materialMeta;
- (void)setMaterialMeta:;
- (void)subViewsTapped;
- (void)addGesture;
- (id)slot;
- (void)layoutSubviews;
- (void)setDelegate:;
- (void)setSlot:;
- (id)delegate;
- (void).cxx_destruct;
- (id)downloadButton;
- (void)setDownloadButton:;
@end
