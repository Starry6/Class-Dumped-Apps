@interface NSPAnisette : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)description;
+ (void)authenticationFailure;
+ (void)sendRequestForTokens:tokenFetchURLSession:tokenActivationQuery:completionHandler:;
+ (void)sendRequestForTokens:tokenFetchURLSession:messageBody:completionHandler:;
@end
