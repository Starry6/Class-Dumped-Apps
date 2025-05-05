@interface IESLiveSaaSFeedPreviewCustomizedElementsModel : NSObject
@property (nonatomic) BOOL enableSmoothEnterRoom;
@property (nonatomic) BOOL enableAutoEnterRoom;
@property (nonatomic) double bottomOffset;
@property (nonatomic) UIColor livingLabelBackgroundColor;
@property (nonatomic) double livingLabelCornerRadius;
@property (nonatomic) double douyinLabelCornerRadius;
- (double)douyinLabelCornerRadius;
- (BOOL)enableAutoEnterRoom;
- (BOOL)enableSmoothEnterRoom;
- (id)livingLabelBackgroundColor;
- (double)livingLabelCornerRadius;
- (void)setDouyinLabelCornerRadius:;
- (void)setEnableAutoEnterRoom:;
- (void)setEnableSmoothEnterRoom:;
- (void)setLivingLabelBackgroundColor:;
- (void)setLivingLabelCornerRadius:;
- (id)init;
- (void).cxx_destruct;
- (double)bottomOffset;
- (void)setBottomOffset:;
@end
