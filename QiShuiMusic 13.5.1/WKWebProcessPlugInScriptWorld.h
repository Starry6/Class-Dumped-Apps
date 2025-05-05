@interface WKWebProcessPlugInScriptWorld : NSObject
@property (nonatomic) ^v _scriptWorld;
@property (nonatomic) NSString name;
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)_apiObject;
- (id)name;
- (void)clearWrappers;
- (void)makeAllShadowRootsOpen;
- (void)disableOverrideBuiltinsBehavior;
- (id)_scriptWorld;
+ (id)world;
+ (id)normalWorld;
@end
