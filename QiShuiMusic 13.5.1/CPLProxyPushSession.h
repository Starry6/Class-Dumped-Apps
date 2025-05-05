@interface CPLProxyPushSession : CPLProxySession
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)commitChangeBatch:withCompletionHandler:;
+ (void)beginSessionForProxy:knownVersion:context:completionHandler:;
@end
