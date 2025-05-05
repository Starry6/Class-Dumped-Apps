@interface LWCRFact : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)bindName:;
+ (id)integerFact:;
+ (id)stringFact:;
+ (id)entitlementsFact:;
+ (id)dataFact:;
@end
