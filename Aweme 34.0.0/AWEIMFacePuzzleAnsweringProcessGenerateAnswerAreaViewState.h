@interface AWEIMFacePuzzleAnsweringProcessGenerateAnswerAreaViewState : NSObject
@property (nonatomic) UIImage icon;
@property (nonatomic) NSAttributedString title;
@property (nonatomic) NSAttributedString subTitle;
@property (nonatomic) double process;
@property (nonatomic) NSAttributedString errorStr;
@property (nonatomic) NSAttributedString recapBtnStr;
@property (nonatomic) BOOL isError;
@property (nonatomic) @? recapTapAction;
- (id)recapTapAction;
- (void)setErrorStr:;
- (void)setRecapBtnStr:;
- (void)setRecapTapAction:;
- (id)errorStr;
- (id)recapBtnStr;
- (id)icon;
- (void)setSubTitle:;
- (id)subTitle;
- (void)setIcon:;
- (void).cxx_destruct;
- (double)process;
- (id)title;
- (void)setProcess:;
- (void)setTitle:;
- (BOOL)isError;
- (void)setIsError:;
@end
