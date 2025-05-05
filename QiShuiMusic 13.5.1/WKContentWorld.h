@interface WKContentWorld : NSObject
@property (nonatomic) _WKUserContentWorld _userContentWorld;
@property (nonatomic) NSString name;
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)_apiObject;
- (id)name;
- (id)_userContentWorld;
+ (id)pageWorld;
+ (id)defaultClientWorld;
+ (id)worldWithName:;
@end
