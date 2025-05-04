@interface AWEStickerPickerDefaultEffectUIConfiguration : NSObject
@property (nonatomic) @? effectListReloadHanlder;
@property (nonatomic) BOOL inIMRecordPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stickerListViewLayout;
- (id)effectListReloadHanlder;
- (id)effectListViewBackgroundColor;
- (double)effectListViewHeight;
- (double)contentInsetBottomForShootButton;
- (Class)stickerItemCellClass;
- (id)effectListErrorView;
- (BOOL)errorContainerViewDisableTapGesture;
- (void)setEffectListReloadHanlder:;
- (id)effectListLoadingView;
- (id)effectListEmptyView;
- (double)shootButtonHeight;
- (double)shootButtonBottomOffset;
- (id)shootButtonBackgroundColor;
- (id)shootButtonTextColor;
- (id)shootButtonTextFont;
- (void)setInIMRecordPage:;
- (BOOL)inIMRecordPage;
- (void).cxx_destruct;
@end
