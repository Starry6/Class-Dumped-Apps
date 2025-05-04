@interface AWEWatchVideoLaterTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackEnterWatchLaterListWithEnterFrom:ancestorEnterMethod:itemNum:fromGroupID:previousPage:extra:;
+ (void)trackRecommendItemArrayAdd:enterFrom:;
+ (void)trackWatchLaterRecommendItemAddWithModel:enterFrom:;
+ (void)trackWatchLaterRecommendShowWithEnterFrom:enterMethod:;
+ (void)trackWatchLaterRecommendItemShow:enterFrom:;
+ (void)trackWatchLaterGuidePanelShow;
+ (void)trackWatchLaterAddWithModel:enterFrom:enterMethod:logExtra:;
+ (void)trackWatchLaterAddWithModel:enterFrom:enterMethod:didAddtoWatchLater:logExtra:;
+ (void)trackWatchLaterAddShowWithModel:enterFrom:enterMethod:;
@end
