@interface AWEActionSheet : UIView
@property (nonatomic) NSString title;
@property (nonatomic) NSArray buttons;
@property (nonatomic) UIView actionSheet;
@property (nonatomic) UIColor containerBackgroundColor;
@property (nonatomic) BOOL tapBackgroundToDismiss;
@property (nonatomic) <AWEActionSheetDelegate> delegate;
- (void)didClickCencelButton:;
- (void)dismissByTapGesture;
- (void)onButtonClicked:;
- (void)setTapBackgroundToDismiss:;
- (BOOL)tapBackgroundToDismiss;
- (void)dismiss;
- (id)init;
- (void)setDelegate:;
- (void)setTitle:;
- (id)buttons;
- (void)show;
- (id)title;
- (id)delegate;
- (void).cxx_destruct;
- (void)setButtons:;
- (id)containerBackgroundColor;
- (void)setActionSheet:;
- (id)actionSheet;
- (void)doNothing;
- (void)setContainerBackgroundColor:;
@end
