@interface AWEAwemeOfflineSettingsModel : NSObject
@property (nonatomic) NSString videoCount;
@property (nonatomic) NSString spaceCount;
@property (nonatomic) NSString playTimeCount;
@property (nonatomic) BOOL isChecked;
@property (nonatomic) BOOL isSelected;
- (void)setSpaceCount:;
- (void)setPlayTimeCount:;
- (id)spaceCount;
- (id)playTimeCount;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (BOOL)isChecked;
- (void)setVideoCount:;
- (id)videoCount;
- (void)setIsChecked:;
+ (id)configWithItemTypeInfoWithIndexPath:;
@end
