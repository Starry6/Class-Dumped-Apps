@interface AWEPlayInteractionElementContainer : AWEElementContainer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addElementByClassName:withParamDict:;
- (void)hideAllElements:animate:duration:hiddenTranform:exceptArray:animateBlock:;
@end
