@interface AWESearchTopBarCapsuleElement : AWESearchTopBarBaseElement
@property (nonatomic) AWESearchBarCapsuleView capsuleView;
@property (nonatomic) NSArray capsules;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeCapsule;
- (void)setCapsules:;
- (id)capsules;
- (void)capsuleViewDidClick:index:isLastItem:;
- (BOOL)shouldTrackNewClick;
- (id)getCapsuleLogExtraParams;
- (void)updateCapsule:;
- (void)appendCapsule:;
- (BOOL)isCapsuleShown;
- (BOOL)hasCapsule;
- (void)updateElementsLayoutWithFrame:;
- (void)setCapsuleHidden:;
- (id)capsuleView;
- (id)initWithDelegate:;
- (void).cxx_destruct;
- (void)setCapsuleView:;
@end
