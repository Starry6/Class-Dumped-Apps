@interface IESECTabKitPopupDynamicConfig : MTLModel
@property (nonatomic) NSString ID;
@property (nonatomic) NSString bundleURL;
@property (nonatomic) NSString extra;
@property (nonatomic) Q zIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)setID:;
- (id)ID;
- (id)extra;
- (id)bundleURL;
- (void)setBundleURL:;
- (void)setZIndex:;
- (void).cxx_destruct;
- (unsigned long long)zIndex;
- (id)toJSON;
+ (id)JSONKeyPathsByPropertyKey;
@end
