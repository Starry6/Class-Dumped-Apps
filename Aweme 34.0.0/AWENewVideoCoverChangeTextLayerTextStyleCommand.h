@interface AWENewVideoCoverChangeTextLayerTextStyleCommand : AWENewVideoCoverCommand
@property (nonatomic) UIColor originForegroundColor;
@property (nonatomic) BOOL originOutline;
@property (nonatomic) double originOutlineWidth;
@property (nonatomic) UIColor originOutlineColor;
@property (nonatomic) UIColor originBackgroundColor;
@property (nonatomic) Q textStyle;
@property (nonatomic) AWEStoryTextImageModel textModel;
- (id)originBackgroundColor;
- (void)setOriginBackgroundColor:;
- (id)textModel;
- (void)setTextModel:;
- (void)realExecute;
- (void)realUnExecute;
- (void)setOriginForegroundColor:;
- (void)setOriginOutline:;
- (void)setOriginOutlineWidth:;
- (void)setOriginOutlineColor:;
- (id)originForegroundColor;
- (BOOL)originOutline;
- (double)originOutlineWidth;
- (id)originOutlineColor;
- (unsigned long long)textStyle;
- (void).cxx_destruct;
- (void)setTextStyle:;
@end
