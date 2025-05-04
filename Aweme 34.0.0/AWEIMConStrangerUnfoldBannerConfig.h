@interface AWEIMConStrangerUnfoldBannerConfig : NSObject
@property (nonatomic) BOOL hasBackgroundImg;
@property (nonatomic) NSString titleStr;
@property (nonatomic) NSString btnTitleStr;
@property (nonatomic) @? didClickConfirmBlock;
@property (nonatomic) @? didClickCloseBlock;
- (BOOL)hasBackgroundImg;
- (id)titleStr;
- (void)setTitleStr:;
- (void)setHasBackgroundImg:;
- (void)setDidClickConfirmBlock:;
- (void)setDidClickCloseBlock:;
- (void)setBtnTitleStr:;
- (id)btnTitleStr;
- (id)didClickConfirmBlock;
- (id)didClickCloseBlock;
- (void).cxx_destruct;
@end
