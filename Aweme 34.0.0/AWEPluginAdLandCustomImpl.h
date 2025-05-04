@interface AWEPluginAdLandCustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bdp_trackUrls:params:;
- (void)bdp_customOpenAdLandPageLinksWithScheme:data:;
- (void)bdp_sendAdLogV1WithEvent:label:groundId:logExtra:creativeId:adExtraData:extra:;
+ (id)sharedPlugin;
@end
