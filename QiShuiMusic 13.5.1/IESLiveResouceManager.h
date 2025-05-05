@interface IESLiveResouceManager : NSObject
@property (nonatomic) IESLiveResouceBundle assetBundle;
@property (nonatomic) NSString type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAssetBundle:type:;
- (void)setType:;
- (id)type;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)assetBundle;
- (void)setAssetBundle:;
+ (id)assetManagerClassesForType:;
+ (id)instanceWithAssetBundle:forType:;
+ (void)registerAssetManagerClass:forType:;
@end
