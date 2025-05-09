@interface AWEFeedSchedulePostReviewViewModel : NSObject
@property (nonatomic) double bottomPadding;
@property (nonatomic) NSString sheetTitle;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) NSAttributedString title;
@property (nonatomic) NSAttributedString message;
@property (nonatomic) NSString cancelButtonTitle;
@property (nonatomic) @? cancelAction;
@property (nonatomic) NSString confirmButtonTitle;
@property (nonatomic) @? confirmAction;
@property (nonatomic) NSString popupType;
- (id)popupType;
- (void)setPopupType:;
- (void)updateTitleAndMessageWithAwemeModel:;
- (double)sheetHeightWithWidth:;
- (id)titleAttributedText:;
- (id)messageAttributedText:;
- (double)contentHeightWithWidth:;
- (BOOL)isCancelButtonHidden;
- (BOOL)isConfirmButtonHidden;
- (id)iconImage;
- (id)message;
- (void)setIconImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setCancelAction:;
- (void)setMessage:;
- (double)bottomPadding;
- (void)setTitle:;
- (id)cancelAction;
- (id)confirmAction;
- (id)confirmButtonTitle;
- (void)setConfirmAction:;
- (void)setBottomPadding:;
- (id)cancelButtonTitle;
- (void)setCancelButtonTitle:;
- (void)setConfirmButtonTitle:;
- (void)setSheetTitle:;
- (id)sheetTitle;
@end
