@interface AWEFeedConcernGoodsCardTracker : NSObject
- (void)trackerWithEvent:params:;
- (void)recommendCardShowTrack:;
- (void)recommendCardClickTrack:spuCard:isSingleCard:;
- (void)enterMerchantDetailPage:;
- (void)recommendCardNoiceShowOrClick:model:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
