@interface IESECGoodsCommentViewModel : NSObject
@property (nonatomic) q commentViewStyle;
@property (nonatomic) IESECGoodsCommentModel goodsComment;
@property (nonatomic) NSString goodCommentCountStr;
@property (nonatomic) BOOL shouldShowVideoCommentView;
@property (nonatomic) {CGSize=dd} carouselCellSize;
- (id)carouselCellSize;
- (long long)commentViewStyle;
- (id)goodCommentCountStr;
- (id)goodsComment;
- (void)setCommentViewStyle:;
- (void)setGoodCommentCountStr:;
- (void)setGoodsComment:;
- (BOOL)shouldShowVideoCommentView;
- (void).cxx_destruct;
@end
