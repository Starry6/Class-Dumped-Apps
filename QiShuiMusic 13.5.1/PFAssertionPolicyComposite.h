@interface PFAssertionPolicyComposite : NSObject
@property (nonatomic) NSArray policies;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)policies;
- (id)init;
- (void)addPolicy:;
- (void).cxx_destruct;
- (void)notifyAssertion:;
@end
