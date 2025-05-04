@interface AWEIMCommentShareSecitonControllerHelper : NSObject
+ (id)filterTranspondIMShareModelListIfNeeded:;
+ (void)getNewInteractiveFriendsDataWithViewModel:awemeModel:completion:;
+ (void)p_trackerLogWithComemntShareMessage:shareModel:commentModel:;
+ (void)getInteractiveFriendsDataWithViewModel:awemeModel:completion:;
+ (void)doMultiSelectShareActionWithSelectList:viewModel:inputText:needCreateGroup:completion:;
+ (void)doShareAction:canShowLightVibrate:completion:;
+ (void)closeCommentMenuWithCompletion:;
+ (BOOL)p_commentAvailiable:;
@end
