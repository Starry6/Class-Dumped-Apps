@interface CPLPullChangeSession : CPLChangeSession
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getChangeBatchWithCompletionHandler:;
- (void)acknowledgeChangeBatch:withCompletionHandler:;
+ (id)shortDescription;
@end
