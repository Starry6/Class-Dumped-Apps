@interface AWEIMFacePuzzleAnsweringProcessViewState : NSObject
@property (nonatomic) @? closeTapAction;
@property (nonatomic) @? moreBtnTapAction;
@property (nonatomic) BOOL isGaming;
@property (nonatomic) UIImage closeImage;
@property (nonatomic) UIImage moreImage;
@property (nonatomic) NSAttributedString title;
@property (nonatomic) NSAttributedString leftTime;
@property (nonatomic) NSAttributedString des;
@property (nonatomic) NSAttributedString leftTimeA;
@property (nonatomic) NSAttributedString leftTimeB;
@property (nonatomic) NSAttributedString leftTimeC;
@property (nonatomic) BOOL hiddenCoverView;
@property (nonatomic) NSAttributedString activityName;
@property (nonatomic) UIImage bgImage;
@property (nonatomic) BOOL hiddenGenerateAnswer;
@property (nonatomic) AWEIMFacePuzzleAnsweringProcessGenerateAnswerAreaViewState generateAnswer;
@property (nonatomic) AWEIMFacePuzzleAnsweringProcessFunctionAreaViewState functionAreaUIState;
@property (nonatomic) AWEIMFacePuzzleAnsweringProcessQuestionAreaViewState questionAreaUIState;
- (BOOL)isGaming;
- (void)setIsGaming:;
- (id)leftTime;
- (void)setLeftTime:;
- (id)des;
- (void)setDes:;
- (id)closeImage;
- (void)setCloseImage:;
- (id)questionAreaUIState;
- (id)generateAnswer;
- (void)setLeftTimeA:;
- (void)setLeftTimeB:;
- (void)setLeftTimeC:;
- (id)leftTimeA;
- (id)leftTimeB;
- (id)leftTimeC;
- (id)functionAreaUIState;
- (BOOL)hiddenGenerateAnswer;
- (BOOL)hiddenCoverView;
- (id)moreImage;
- (id)moreBtnTapAction;
- (id)closeTapAction;
- (void)setHiddenCoverView:;
- (void)setFunctionAreaUIState:;
- (void)setQuestionAreaUIState:;
- (void)setGenerateAnswer:;
- (void)setCloseTapAction:;
- (void)setMoreBtnTapAction:;
- (void)setHiddenGenerateAnswer:;
- (void)setMoreImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)activityName;
- (void)setActivityName:;
- (id)bgImage;
- (void)setBgImage:;
@end
