@interface BDXProtocolMethodMatcher : NSObject
@property (nonatomic) NSMutableSet methods;
- (BOOL)containMethod:;
- (id)methods;
- (id)initWithProtocol:;
- (void).cxx_destruct;
- (void)setMethods:;
@end
