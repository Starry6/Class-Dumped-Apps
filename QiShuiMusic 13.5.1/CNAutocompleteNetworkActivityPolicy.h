@interface CNAutocompleteNetworkActivityPolicy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldSearchServers;
- (double)delayBeforeBeginningNetworkActivity;
+ (id)policyWithNoDelay;
+ (id)policyWithThrottlingDelayForString:;
@end
