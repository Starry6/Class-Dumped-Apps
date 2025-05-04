@interface AWECommentTranslateModel : NSObject
@property (nonatomic) BOOL isShowingTranslateButton;
@property (nonatomic) BOOL needShowTranslateInfo;
@property (nonatomic) Q translateState;
@property (nonatomic) BOOL shouldShowTranslateTips;
@property (nonatomic) AWECodeGenCommentTranslateConfigModel translateConfigModel;
@property (nonatomic) AWECodeGenV1CommentTranslateResponse translateResponseModel;
- (void)setTranslateState:;
- (void)setTranslateResponseModel:;
- (void)setIsShowingTranslateButton:;
- (void)setNeedShowTranslateInfo:;
- (BOOL)needShowTranslateInfo;
- (unsigned long long)translateState;
- (id)translateConfigModel;
- (id)translateResponseModel;
- (void)setTranslateConfigModel:;
- (void)setShouldShowTranslateTips:;
- (BOOL)isShowingTranslateButton;
- (BOOL)shouldShowTranslateTips;
- (void).cxx_destruct;
@end
