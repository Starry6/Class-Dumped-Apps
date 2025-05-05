@interface IESIMSDKNetworkImp : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sendRequestWithMethod:url:timeout:priority:headers:body:withCallback:;
- (id)init;
+ (id)sharedInstance;
@end
