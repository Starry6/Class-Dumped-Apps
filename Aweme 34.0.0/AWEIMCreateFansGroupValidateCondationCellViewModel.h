@interface AWEIMCreateFansGroupValidateCondationCellViewModel : NSObject
@property (nonatomic) NSString iconName;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL showBottomLine;
@property (nonatomic) BOOL showTopCorner;
@property (nonatomic) BOOL showBottomCorner;
- (BOOL)showBottomLine;
- (void)setShowBottomLine:;
- (BOOL)showTopCorner;
- (void)setShowTopCorner:;
- (BOOL)showBottomCorner;
- (void)setShowBottomCorner:;
- (id)subtitle;
- (id)iconName;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setIconName:;
- (void)setTitle:;
- (double)cellHeight;
- (void)setCellHeight:;
@end
