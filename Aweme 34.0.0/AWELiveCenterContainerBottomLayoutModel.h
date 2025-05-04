@interface AWELiveCenterContainerBottomLayoutModel : NSObject
@property (nonatomic) UIView topView;
@property (nonatomic) UIView bottomView;
@property (nonatomic) double offset;
@property (nonatomic) Q type;
@property (nonatomic) BOOL isTopLayout;
- (BOOL)isTopLayout;
- (void)setIsTopLayout:;
- (void)setOffset:;
- (double)offset;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)topView;
- (id)bottomView;
- (void)setBottomView:;
- (void)setTopView:;
@end
