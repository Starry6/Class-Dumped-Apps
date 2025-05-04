@interface AWESelfDigitalControlCellModel : NSObject
@property (nonatomic) NSString itemTitle;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString iconName;
@property (nonatomic) NSString rightTitle;
@property (nonatomic) BOOL isEnable;
@property (nonatomic) @? cellTappedBlock;
- (BOOL)isEnable;
- (void)setCellTappedBlock:;
- (void)setIsEnable:;
- (id)cellTappedBlock;
- (id)iconName;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (void)setIconName:;
- (id)itemTitle;
- (void)setItemTitle:;
- (id)rightTitle;
- (void)setRightTitle:;
@end
