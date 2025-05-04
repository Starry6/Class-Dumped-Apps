@interface AWENLEHttpClient : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)request:item:pHttpClient:callback:;
- (void)dealloc;
+ (id)sharedManager;
@end
