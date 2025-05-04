@interface AWEProfileNaviAddFriendItemController : NSObject
@property (nonatomic) AWEProfileNavigationButton addFriendButton;
@property (nonatomic) <AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (id)profileContext;
- (void)onReloadUI:isCache:;
- (id)recommendFriendRedDotNode;
- (id)navigationItemView;
- (id)addFriendButton;
- (id)getButtonText;
- (id)commonComponent;
- (void)addFriendButtonClicked:;
- (void)setAddFriendButton:;
- (id)delegate;
- (void)viewDidLoad;
- (long long)type;
- (void)setType:;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)itemSize;
@end
