@interface BKSMutableTouchAuthenticationSpecification : BKSTouchAuthenticationSpecification
@property (nonatomic) NSSet displays;
@property (nonatomic) I slotID;
@property (nonatomic) Q authenticationMessageContext;
@property (nonatomic) I secureName;
@property (nonatomic) Q hitTestInformationMask;
- (void)setSlotID:;
- (void)setDisplays:;
- (void)setAuthenticationMessageContext:;
- (void)setSecureName:;
- (void)setHitTestInformationMask:;
@end
