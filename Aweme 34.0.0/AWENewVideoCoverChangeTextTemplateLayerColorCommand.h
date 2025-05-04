@interface AWENewVideoCoverChangeTextTemplateLayerColorCommand : AWENewVideoCoverCommand
@property (nonatomic) NSMutableArray originColors;
@property (nonatomic) UIColor nowColor;
- (void)realExecute;
- (void)realUnExecute;
- (id)nowColor;
- (void)setNowColor:;
- (void)setOriginColors:;
- (id)originColors;
- (void).cxx_destruct;
@end
