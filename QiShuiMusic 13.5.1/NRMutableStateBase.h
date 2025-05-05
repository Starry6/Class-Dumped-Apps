@interface NRMutableStateBase : NSObject
@property (nonatomic) <NRMutableStateParentDelegate> parentDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)addObserverQueue:withBlock:;
- (id)parentDelegate;
- (void)setParentDelegate:;
- (void)removeObserver:;
- (void)notifyParentWithDiff:;
- (void)notifyObserversWithDiff:;
- (id)init;
- (id)applyDiff:upOnly:notifyParent:unconditional:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)applyDiff:;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)diffFrom:to:;
+ (id)enclosedClassTypes;
+ (id)classTypes;
@end
