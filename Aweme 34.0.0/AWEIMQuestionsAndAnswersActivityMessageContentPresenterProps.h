@interface AWEIMQuestionsAndAnswersActivityMessageContentPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tappedBlock;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) BOOL isActive;
@property (nonatomic) NSString url;
- (id)tappedBlock;
- (void)setTappedBlock:;
- (void)setIsActive:;
- (void)setUrl:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (BOOL)isActive;
- (id)url;
- (void)setTitle:;
@end
