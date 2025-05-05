@interface CSJDynamicTimingPolicyDecorator : CSJDynamicAbstractDecorator
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)timingWithPlayDuration:stopped:;
- (void)_pbu_showOrHiddenWithPlayDuration:stopped:;
- (void)render;
@end
