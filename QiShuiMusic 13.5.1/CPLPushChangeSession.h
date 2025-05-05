@interface CPLPushChangeSession : CPLChangeSession
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)commitChangeBatch:withUnderlyingCompletionHandler:;
- (id)initWithLibraryManager:;
- (void)commitChangeBatch:completionHandler:;
+ (id)shortDescription;
@end
