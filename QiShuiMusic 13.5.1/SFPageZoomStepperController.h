@interface SFPageZoomStepperController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_pageZoomChanged:;
- (void)prepareStepper:;
- (void)incrementValue:;
- (void)decrementValue:;
- (void)resetValue:;
- (id)longestTextForButton:;
- (id)initWithDocument:preferenceManager:;
- (void)_updateButtonsEnabledWithZoomFactor:;
- (void)_updateButtonsEnabledOnMainQueueWithZoomFactor:;
@end
