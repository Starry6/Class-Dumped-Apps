@interface AWESearchVideoPanelPrefixModel : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString panelIconURL;
@property (nonatomic) NSString blackPanelIconURL;
- (void)setPanelIconURL:;
- (void)setBlackPanelIconURL:;
- (id)panelIconURL;
- (id)blackPanelIconURL;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
