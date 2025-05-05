@interface SFHighlightContactListCell : UIControl
@property (nonatomic) CNContact contact;
@property (nonatomic) <SFHighlightContactListCellDelegate> delegate;
@property (nonatomic) BOOL firstInList;
@property (nonatomic) BOOL lastInList;
@property (nonatomic) @? infoViewControllerHandler;
- (id)initWithContact:;
- (id)contact;
- (void)setDelegate:;
- (void)_didReceiveTap:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)_updateMaskedCorners;
- (void)setFirstInList:;
- (void)setLastInList:;
- (BOOL)isFirstInList;
- (BOOL)isLastInList;
- (id)infoViewControllerHandler;
- (void)setInfoViewControllerHandler:;
@end
