@interface IESLiveSaaSPopupFragment : IESLiveRoomComponent
@property (nonatomic) NSMapTable popupItems;
@property (nonatomic) IESLiveSaaSPopupItem lastItem;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeWithType:;
- (void)removeWithItem:;
- (void)cleanWithItem:;
- (void)configItem:;
- (void)didSetAttachingDIContext;
- (id)getLastPopupItem;
- (void)hideAllPopupItemImmediately;
- (void)hideImmediatelyWithType:;
- (void)hideWithType:;
- (BOOL)isItemShowing:;
- (id)itemWithType:;
- (id)popupItems;
- (void)setPopupItems:;
- (BOOL)shouldUsePopupManagerForItem:;
- (void)setUp;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)hide:;
- (id)lastItem;
- (void)show:;
- (void)setLastItem:;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
