@interface AWENoticeCellCoverAuthUtils : NSObject
+ (BOOL)shouldShowNotModularizedCellCoverWithModel:;
+ (BOOL)shouldShowModularizedCellCoverWithModel:noticeModel:;
+ (void)__logErrorReason:awemeID:;
@end
