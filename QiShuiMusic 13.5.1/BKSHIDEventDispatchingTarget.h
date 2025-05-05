@interface BKSHIDEventDispatchingTarget : NSObject
@property (nonatomic) NSInteger pid;
@property (nonatomic) BKSHIDEventDeferringEnvironment deferringEnvironment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)deferringEnvironment;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (int)pid;
- (id)_initWithEnvironment:pid:;
- (void).cxx_destruct;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)systemTarget;
+ (BOOL)supportsSecureCoding;
+ (id)targetForDeferringEnvironment:;
+ (id)focusTargetForPID:;
+ (id)keyboardFocusTarget;
+ (id)targetForPID:environment:;
@end
