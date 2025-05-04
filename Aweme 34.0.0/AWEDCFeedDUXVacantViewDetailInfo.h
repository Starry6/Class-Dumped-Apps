@interface AWEDCFeedDUXVacantViewDetailInfo : NSObject
@property (nonatomic) BOOL useCustomTitle;
@property (nonatomic) BOOL useCustomImage;
@property (nonatomic) BOOL useCustorDetail;
@property (nonatomic) NSString vacantViewTitle;
@property (nonatomic) UIImage vacantViewImage;
@property (nonatomic) NSString vacantViewDetail;
- (void)setUseCustomTitle:;
- (void)setUseCustorDetail:;
- (void)setVacantViewImage:;
- (void)setVacantViewDetail:;
- (void)setVacantViewTitle:;
- (BOOL)useCustomTitle;
- (BOOL)useCustorDetail;
- (id)vacantViewTitle;
- (id)vacantViewImage;
- (id)vacantViewDetail;
- (void).cxx_destruct;
- (void)setUseCustomImage:;
- (BOOL)useCustomImage;
@end
