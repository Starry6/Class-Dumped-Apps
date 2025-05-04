@interface AWENearbyFloatBackCacheItem : NSObject
@property (nonatomic) UIView attachView;
@property (nonatomic) AWENearbyFloatBackView backView;
@property (nonatomic) AWENearbyGuideFloatBackModel floatBackModel;
@property (nonatomic) NSDate backViewShowedDate;
@property (nonatomic) NSMutableSet feedScrolledItemIDSet;
- (void)setFeedScrolledItemIDSet:;
- (void)setFloatBackModel:;
- (id)floatBackModel;
- (BOOL)isSameFloatBackModel:;
- (id)attachView;
- (void)setAttachView:;
- (id)backViewShowedDate;
- (void)setBackViewShowedDate:;
- (id)feedScrolledItemIDSet;
- (id)backView;
- (void).cxx_destruct;
- (void)setBackView:;
+ (id)createItemWithBackView:floatBackModel:;
@end
