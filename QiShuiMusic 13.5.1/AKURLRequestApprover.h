@interface AKURLRequestApprover : NSObject
- (void).cxx_destruct;
- (id)initWithWhitelistedPaths:;
- (BOOL)shouldAllowRequest:;
- (BOOL)_matchInputAgainstPaths:;
@end
