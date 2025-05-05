@interface CSJDynamicStarView : CSJDynamicAbstractView
@property (nonatomic) NSMutableArray starViewArray;
- (void)adjust_buDynamic_frameIfNeed;
- (id)buildImageViewOnStarViewWithImageNamed:rect:;
- (void)buildStarViewWithLightView:grayView:;
- (void)setStarViewArray:;
- (id)starViewArray;
- (void).cxx_destruct;
- (void)render;
+ (id)sizeForContent:brickType:style:lineFeed:lineLimit:lineCount:;
@end
