@interface AWELeftSideBarBannerExitInfo : NSObject
@property (nonatomic) NSString businessID;
@property (nonatomic) double endTime;
@property (nonatomic) q showCount;
@property (nonatomic) BOOL didClickCloseButton;
- (BOOL)didClickCloseButton;
- (id)initWithBusinessID:endTime:;
- (void)setDidClickCloseButton:;
- (double)endTime;
- (void)encodeWithCoder:;
- (id)businessID;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setShowCount:;
- (long long)showCount;
@end
