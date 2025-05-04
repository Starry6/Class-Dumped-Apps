@interface AWEFeedConcernPOIGoodsResourceManager : NSObject
- (void)preloadConcernPOIGoodsResourceWithChannel:;
- (id)fetchResourceWithChannel:component:;
- (id)fetchResourceWithChannel:component:needTrack:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
