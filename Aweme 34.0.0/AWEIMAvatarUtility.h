@interface AWEIMAvatarUtility : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadAvatarWithIMCacheWithImageView:URLArray:placeholder:shareModel:roundCornerRatio:trackScene:completion:;
+ (id)sharedInstance;
@end
