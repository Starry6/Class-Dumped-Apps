@interface PIANetworkCustomImplEngine : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)taskWithRequest:completionHandler:;
- (BOOL)available;
- (long long)engineType;
@end
