@interface AWEGrouponFloatBackManager : NSObject
@property (nonatomic) NSMapTable mapTable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)nearbyContainerDidDisappear;
- (void)changeAttachView:fromView:;
- (void)removeFloatBackViewIfNeedByFeedScrolledItem:attachView:;
- (void)updateBackViewPositionScene:attachView:;
- (void)foldFloatBackViewIfNeedByScrollView:attachView:;
- (void)removeNoneResidentFloatBackViewIfNeedByScrollView:attachView:;
- (void)dismissAllFloatBackIfNeed;
- (id)showFloatBackView:attachView:;
- (void)floatBackDefaultAction:attachView:;
- (void)dismissFloatBackIfNeedWithAttachView:;
- (void)handleNotifyRefreshPrepageWith:;
- (void)dismissAllNoneResidentFloatBackIfNeeded;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)mapTable;
- (void)setMapTable:;
+ (double)getFloatBackBottomWithPositionScene:customBottomOffset:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
