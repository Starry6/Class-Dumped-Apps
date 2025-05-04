@interface AWEActionSheet : UIView
@property (nonatomic) NSString title;
@property (nonatomic) NSArray buttons;
@property (nonatomic) UIView actionSheet;
@property (nonatomic) UIColor containerBackgroundColor;
@property (nonatomic) BOOL tapBackgroundToDismiss;
@property (nonatomic) <AWEActionSheetDelegate> delegate;
- (void)onButtonClicked:;
- (void)setTapBackgroundToDismiss:;
- (void)dismissByTapGesture;
- (void)didClickCencelButton:;
- (BOOL)tapBackgroundToDismiss;
- (void)show;
- (id)init;
- (id)delegate;
- (void)setButtons:;
- (id)buttons;
- (void)dismiss;
- (void).cxx_destruct;
- (id)title;
- (void)setDelegate:;
- (void)setTitle:;
- (id)containerBackgroundColor;
- (void)setActionSheet:;
- (id)actionSheet;
- (void)doNothing;
- (void)setContainerBackgroundColor:;
@end
