@interface AWEIMGroupUpgradeViewModel : NSObject
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) BOOL shouldEnableMultiModule;
@property (nonatomic) NSArray sectionViewModels;
@property (nonatomic) BOOL shouldShowLoadingView;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) NSNumber expUpgradeNumber;
@property (nonatomic) AWEIMGroupUpgradeInfo pageModel;
@property (nonatomic) BOOL alreadyUpgrade;
- (id)sectionViewModels;
- (void)setSectionViewModels:;
- (id)expUpgradeNumber;
- (id)pageModel;
- (void)setPageModel:;
- (void)fetchDataWithCompletion:;
- (BOOL)shouldShowNextPage;
- (void)setExpUpgradeNumber:;
- (void)tryResetTaskDisableResponseToClick;
- (id)confirmViewTitle;
- (id)confirmViewTipTemplateText;
- (id)tipTemplateAction;
- (BOOL)shouldButtonEnableClick;
- (id)getConfirmPageConfigModel;
- (void)setAlreadyUpgrade:;
- (void)requestUpdateGroup:;
- (BOOL)indexPathOutOfRange:;
- (id)taskViewModelAtIndexPath:;
- (void)makeShouldShowLoadingView:;
- (void)setShouldEnableMultiModule:;
- (BOOL)sectionIndexOutOfRange:;
- (void)__constructFunctionsWithGroupUpGradeInfo:;
- (id)__sectionViewModelsFramework;
- (BOOL)shouldEnableMultiModule;
- (id)__sectionDataWithTaskTypes:fromTaskList:;
- (id)__sectionViewModelWithIdentifier:sectionTitle:taskTypes:;
- (BOOL)alreadyUpgrade;
- (id)p_getButtonHintNoticeModel;
- (BOOL)__allTaskCompleted;
- (BOOL)isLoading;
- (void).cxx_destruct;
- (void)setIsLoading:;
- (id)conversation;
- (void)setConversation:;
- (id)initWithConversation:;
- (void)setShouldShowLoadingView:;
- (BOOL)shouldShowLoadingView;
@end
