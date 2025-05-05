@interface BKSMutableMousePointerEventGlobalRoute : BKSMousePointerEventGlobalRoute
@property (nonatomic) I contextID;
@property (nonatomic) BKSMousePointerGlobalContextOptions options;
- (void)setOptions:;
- (void)setContextID:;
@end
