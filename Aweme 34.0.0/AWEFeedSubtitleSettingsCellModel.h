@interface AWEFeedSubtitleSettingsCellModel : NSObject
@property (nonatomic) UIImage icon;
@property (nonatomic) NSString content;
@property (nonatomic) NSString identifier;
@property (nonatomic) q type;
@property (nonatomic) BOOL isOn;
@property (nonatomic) @? switchStatusChangedBlock;
@property (nonatomic) NSString rightContent;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (id)tapBlock;
- (id)switchStatusChangedBlock;
- (void)setSwitchStatusChangedBlock:;
- (id)rightContent;
- (void)setRightContent:;
- (id)content;
- (void)setIdentifier:;
- (id)icon;
- (id)identifier;
- (long long)type;
- (BOOL)isOn;
- (void)setContent:;
- (void)setType:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setIsOn:;
@end
