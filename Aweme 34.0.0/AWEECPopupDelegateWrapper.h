@interface AWEECPopupDelegateWrapper : NSProxy
@property (nonatomic) AWEECMultiMallContainerController multiMallContainer;
@property (nonatomic) <IESECMallPopupDelegate> popupDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)popupDelegate;
- (BOOL)currentOutContainerIsVisible;
- (id)multiMallContainer;
- (id)currentListContextIdForPopup:;
- (id)pageNameForPopup:;
- (void)setMultiMallContainer:;
- (void)setPopupDelegate:;
- (BOOL)respondsToSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
@end
