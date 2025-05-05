@interface NWPHHandler : NSObject
@property (nonatomic) NSArray allowedEntitlementGroup;
@property (nonatomic) ^? handlerFunction;
- (id)handlerFunction;
- (void)setHandlerFunction:;
- (void).cxx_destruct;
- (id)initWithHandlerFunction:allowedEntitlementGroup:;
- (void)setAllowedEntitlementGroup:;
- (id)allowedEntitlementGroup;
@end
