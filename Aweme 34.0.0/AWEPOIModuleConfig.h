@interface AWEPOIModuleConfig : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)collectPOIEnabled;
+ (BOOL)sharePOIEnabled;
+ (BOOL)morePOIEnabled;
+ (BOOL)labelDisableLocalizations;
+ (BOOL)shouldRequestLocationWhenHasNoPermission;
+ (BOOL)enableLocateRedo;
+ (BOOL)poiDetailHighlightDistance;
+ (BOOL)canEnterLiveRoomWhenNotLogin;
@end
