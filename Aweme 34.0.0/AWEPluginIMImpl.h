@interface AWEPluginIMImpl : NSObject
@property (nonatomic) AWEIMConfirmView view;
@property (nonatomic) NSString functionFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bdp_shareMessageToFriend:uniqueID:callback:;
- (void)setFunctionFrom:;
- (id)generateSchema:query:;
- (id)functionFrom;
- (void)handleResult:uniqueID:isFriend:;
- (void)dealloc;
- (id)view;
- (void)setView:;
- (void).cxx_destruct;
+ (id)sharedPlugin;
@end
