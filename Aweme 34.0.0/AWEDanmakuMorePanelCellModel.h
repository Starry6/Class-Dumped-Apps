@interface AWEDanmakuMorePanelCellModel : NSObject
@property (nonatomic) UIImage icon;
@property (nonatomic) NSString content;
@property (nonatomic) q type;
@property (nonatomic) BOOL isOn;
@property (nonatomic) @? switchStatusChangedBlock;
@property (nonatomic) @? tapBlock;
@property (nonatomic) UIColor textColor;
- (void)setTapBlock:;
- (id)tapBlock;
- (id)switchStatusChangedBlock;
- (void)setSwitchStatusChangedBlock:;
- (id)content;
- (id)icon;
- (void)setTextColor:;
- (long long)type;
- (BOOL)isOn;
- (void)setContent:;
- (void)setType:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setIsOn:;
@end
