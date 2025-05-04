@interface AWENoticeInteractionListControllerViewModel : NSObject
@property (nonatomic) NSMutableDictionary cellViewModels;
- (id)cellViewModels;
- (void)setCellViewModels:;
- (id)cellModelForNotice:;
- (id)createCommentContext:;
- (id)cellModelForNoticeID:;
- (id)init;
- (void).cxx_destruct;
@end
