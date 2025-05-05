@interface BDARVLynxBaseBridgeModule : NSObject
@property (nonatomic) <BDARVLynxBridgeContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)canOpenURLs:successCallback:failCallback:;
- (void)checkCanOpenURL:iterator:successCallback:failCallback:;
- (id)getStorage:;
- (id)initWithParam:;
- (void)removeStorage:;
- (id)context;
- (void)setStorage:;
- (void).cxx_destruct;
- (void)setContext:;
+ (id)methodLookup;
+ (id)name;
@end
