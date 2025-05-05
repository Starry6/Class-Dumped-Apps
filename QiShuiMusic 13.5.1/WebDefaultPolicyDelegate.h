@interface WebDefaultPolicyDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)webView:decidePolicyForNavigationAction:request:frame:decisionListener:;
- (void)webView:decidePolicyForNewWindowAction:request:newFrameName:decisionListener:;
- (void)webView:decidePolicyForMIMEType:request:frame:decisionListener:;
- (void)webView:unableToImplementPolicyWithError:frame:;
- (BOOL)webView:shouldGoToHistoryItem:;
+ (id)sharedPolicyDelegate;
@end
