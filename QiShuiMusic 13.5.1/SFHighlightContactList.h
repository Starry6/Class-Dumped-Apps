@interface SFHighlightContactList : UIView
@property (nonatomic) @? infoViewControllerHandler;
@property (nonatomic) @? rowTapHandler;
@property (nonatomic) @? manageHandler;
@property (nonatomic) @? resizeHandler;
@property (nonatomic) NSArray contacts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContacts:;
- (void)layoutSubviews;
- (id)contacts;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (id)initWithContacts:;
- (id)infoViewControllerHandler;
- (void)setInfoViewControllerHandler:;
- (void)_didTapManage:;
- (void)cellDidReceiveTap:;
- (void)_updateList;
- (id)rowTapHandler;
- (void)setRowTapHandler:;
- (id)manageHandler;
- (void)setManageHandler:;
- (id)resizeHandler;
- (void)setResizeHandler:;
@end
