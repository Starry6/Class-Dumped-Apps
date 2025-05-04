@interface AWEIMFacePuzzleAnsweringProcessQuestionAreaViewState : NSObject
@property (nonatomic) UIImage avatarImage;
@property (nonatomic) NSAttributedString name;
@property (nonatomic) NSAttributedString subTitle;
@property (nonatomic) NSAttributedString title;
@property (nonatomic) @? didClickAnswer;
@property (nonatomic) NSArray questions;
- (id)didClickAnswer;
- (void)setDidClickAnswer:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setName:;
- (id)name;
- (void)setTitle:;
- (void)setAvatarImage:;
- (id)avatarImage;
- (id)questions;
- (void)setQuestions:;
@end
