@interface AWEHotSpotChannelViewState : NSObject
@property (nonatomic) BOOL isWillShowing;
@property (nonatomic) BOOL hasDisappeared;
@property (nonatomic) BOOL hasFetchData;
@property (nonatomic) BOOL hasExecCompletion;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL isFromWidget;
@property (nonatomic) BOOL hasShowSkyLight;
@property (nonatomic) BOOL hasTouchedCapsuleViewOrRefresh;
- (BOOL)isFromWidget;
- (void)setIsFromWidget:;
- (BOOL)isWillShowing;
- (void)setIsWillShowing:;
- (BOOL)hasDisappeared;
- (void)setHasDisappeared:;
- (BOOL)hasFetchData;
- (void)setHasFetchData:;
- (BOOL)hasExecCompletion;
- (void)setHasExecCompletion:;
- (BOOL)hasShowSkyLight;
- (void)setHasShowSkyLight:;
- (BOOL)hasTouchedCapsuleViewOrRefresh;
- (void)setHasTouchedCapsuleViewOrRefresh:;
- (BOOL)isFetching;
- (void)setIsFetching:;
@end
