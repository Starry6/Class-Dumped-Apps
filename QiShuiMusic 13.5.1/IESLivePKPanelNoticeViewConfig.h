@interface IESLivePKPanelNoticeViewConfig : NSObject
@property (nonatomic) Q style;
@property (nonatomic) BOOL hasTipsIcon;
@property (nonatomic) BOOL hasCloseButton;
@property (nonatomic) BOOL hasTransferButton;
@property (nonatomic) NSString text;
@property (nonatomic) NSString transferButtonText;
@property (nonatomic) @? transferAction;
@property (nonatomic) @? closeAction;
- (void)setHasTipsIcon:;
- (BOOL)hasTipsIcon;
- (BOOL)hasTransferButton;
- (void)setHasTransferButton:;
- (void)setTransferAction:;
- (void)setTransferButtonText:;
- (id)transferAction;
- (id)transferButtonText;
- (void)setHasCloseButton:;
- (void)setText:;
- (void)setStyle:;
- (void)setCloseAction:;
- (id)closeAction;
- (BOOL)hasCloseButton;
- (void).cxx_destruct;
- (unsigned long long)style;
- (id)text;
@end
