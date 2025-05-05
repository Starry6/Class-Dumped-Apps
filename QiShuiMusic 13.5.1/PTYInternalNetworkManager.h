@interface PTYInternalNetworkManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)download:headers:destPath:callback:;
- (void)request:method:headers:body:timeout:callback:;
+ (id)sharedManager;
@end
