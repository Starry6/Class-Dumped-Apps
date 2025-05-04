@interface AWECommentAccelerateReviewResponseModel : AWEBaseApiModel
@property (nonatomic) NSString reviewText;
@property (nonatomic) NSString popupResultTitle;
@property (nonatomic) NSString popupResultDesc;
- (id)popupResultDesc;
- (id)popupResultTitle;
- (void)setPopupResultTitle:;
- (void)setPopupResultDesc:;
- (void).cxx_destruct;
- (id)reviewText;
- (void)setReviewText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
