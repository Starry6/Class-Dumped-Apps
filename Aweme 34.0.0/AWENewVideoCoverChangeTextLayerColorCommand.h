@interface AWENewVideoCoverChangeTextLayerColorCommand : AWENewVideoCoverCommand
@property (nonatomic) UIColor originColor;
@property (nonatomic) UIColor nowColor;
- (void)setOriginColor:;
- (id)originColor;
- (void)realExecute;
- (void)realUnExecute;
- (id)nowColor;
- (void)setNowColor:;
- (void).cxx_destruct;
@end
