@interface BDXPopupContainerService : NSObject
@property (nonatomic) NSMutableArray stack;
@property (nonatomic) <BDXDisableSwipeServiceProtocol> disableSwipeDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)create:context:;
- (void)closePopup:animated:params:;
- (void)closePopup:animated:params:completion:;
- (id)completeWithAnimationBlockConfig:;
- (id)disableSwipeDelegate;
- (id)open:context:;
- (id)popupWithContainerID:;
- (void)setDisableSwipeDelegate:;
- (id)init;
- (id)stack;
- (void).cxx_destruct;
+ (id)serviceBizID;
+ (unsigned long long)serviceScope;
+ (unsigned long long)serviceType;
@end
