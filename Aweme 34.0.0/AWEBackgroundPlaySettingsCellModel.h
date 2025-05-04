@interface AWEBackgroundPlaySettingsCellModel : NSObject
@property (nonatomic) UIImage icon;
@property (nonatomic) NSString content;
@property (nonatomic) NSString contentForBigFont;
@property (nonatomic) BOOL isOn;
@property (nonatomic) @? switchChangedBlock;
@property (nonatomic) @? willDisPlayBlock;
- (void)setSwitchChangedBlock:;
- (void)setContentForBigFont:;
- (void)setWillDisPlayBlock:;
- (id)contentForBigFont;
- (id)switchChangedBlock;
- (id)willDisPlayBlock;
- (id)content;
- (id)icon;
- (BOOL)isOn;
- (void)setContent:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setIsOn:;
@end
