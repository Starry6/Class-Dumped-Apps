@interface PIACustomNetworkIMP : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonParams;
- (id)taskWithRequest:completionHandler:;
+ (void)executeAfterPrepareTask;
+ (id)sharedInstance;
@end
