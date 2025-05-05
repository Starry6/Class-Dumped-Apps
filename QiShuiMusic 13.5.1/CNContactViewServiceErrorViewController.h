@interface CNContactViewServiceErrorViewController : CNErrorViewController
@property (nonatomic) <CNContactViewHostProtocol> delegate;
@property (nonatomic) <CNContactViewControllerPPTDelegate> pptDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupWithOptions:readyBlock:;
- (void)didChangeToEditMode:;
- (void)didChangeToShowTitle:;
- (void)editCancel;
- (void)toggleEditing;
- (void)performConfirmedCancel;
- (id)pptDelegate;
- (void)setPptDelegate:;
@end
