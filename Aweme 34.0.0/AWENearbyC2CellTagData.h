@interface AWENearbyC2CellTagData : AWEBaseApiModel
@property (nonatomic) AWENearbyC2CellTextData text;
@property (nonatomic) AWEURLModel headIcon;
@property (nonatomic) AWENearbyC2CellTextData clickText;
@property (nonatomic) AWEURLModel clickIcon;
@property (nonatomic) BOOL iconSizeConfigEnable;
@property (nonatomic) {CGSize=dd} iconSize;
- (BOOL)iconSizeConfigEnable;
- (id)headIcon;
- (void)setHeadIcon:;
- (id)clickText;
- (void)setClickText:;
- (id)clickIcon;
- (void)setClickIcon:;
- (void)setText:;
- (id)text;
- (id)iconSize;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
