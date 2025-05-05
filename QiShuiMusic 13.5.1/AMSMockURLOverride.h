@interface AMSMockURLOverride : NSObject
@property (nonatomic) NSMutableArray comparators;
@property (nonatomic) AMSObservable executedObservable;
@property (nonatomic) AMSMockURLResponse response;
- (id)init;
- (id)response;
- (void).cxx_destruct;
- (void)setResponse:;
- (id)copyWithZone:;
- (void)withURLMatchingHost:;
- (void)withURLContainingPath:;
- (void)withURLQueryItems:;
- (void)withURLRegexValidation:;
- (void)withHTTPBodyValidation:encoding:;
- (void)withResponse:;
- (BOOL)shouldOverrideURLRequest:;
- (void)_withURLMatchingHost:containingPath:queryItems:;
- (id)executedObservable;
- (void)setExecutedObservable:;
- (id)comparators;
- (void)setComparators:;
+ (id)overrideWithHost:usingResponse:;
+ (id)overrideWithPathComponent:usingResponse:;
+ (id)overrideWithURLRegex:usingResponse:;
@end
