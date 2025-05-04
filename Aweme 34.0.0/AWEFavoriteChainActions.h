@interface AWEFavoriteChainActions : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)promise_showFavoriteSnackBar:snackBarType:snackBarTitleString:;
- (id)promise_showFavoriteAddNewFilePopup:;
- (id)generateSnackBarWithType:snackBarTitleString:;
- (id)promise_showFavoriteAddToFilePopup:shouldShowSeeLaterLabel:;
- (void)startAtSnackBarWithConfig:;
- (void)startAtAddToFildeWithEnterFrom:itemID:authorID:coverUrl:extraParams:;
- (void)startAtAddToFildeWithConfig:networkCompletion:;
@end
