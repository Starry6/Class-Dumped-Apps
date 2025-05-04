@interface AWENewVideoCoverChangeTextTemplateLayerTextStyleCommand : AWENewVideoCoverCommand
@property (nonatomic) NSMutableArray originForegroundColors;
@property (nonatomic) NSMutableArray originOutlines;
@property (nonatomic) NSMutableArray originOutlineWidths;
@property (nonatomic) NSMutableArray originOutlineColors;
@property (nonatomic) NSMutableArray originBackgroundColors;
@property (nonatomic) Q textStyle;
@property (nonatomic) AWEStoryTextImageModel textModel;
- (id)textModel;
- (void)setTextModel:;
- (void)realExecute;
- (void)realUnExecute;
- (void)setOriginForegroundColors:;
- (void)setOriginOutlines:;
- (void)setOriginOutlineWidths:;
- (void)setOriginOutlineColors:;
- (void)setOriginBackgroundColors:;
- (id)originForegroundColors;
- (id)originOutlines;
- (id)originOutlineWidths;
- (id)originOutlineColors;
- (id)originBackgroundColors;
- (unsigned long long)textStyle;
- (void).cxx_destruct;
- (void)setTextStyle:;
@end
