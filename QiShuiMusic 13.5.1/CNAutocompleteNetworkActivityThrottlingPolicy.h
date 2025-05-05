@interface CNAutocompleteNetworkActivityThrottlingPolicy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithString:;
- (BOOL)shouldSearchServers;
- (double)delayBeforeBeginningNetworkActivity;
@end
