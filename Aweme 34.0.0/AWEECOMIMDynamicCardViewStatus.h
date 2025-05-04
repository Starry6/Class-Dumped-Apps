@interface AWEECOMIMDynamicCardViewStatus : NSObject
@property (nonatomic) BOOL didCreateCardView;
@property (nonatomic) BOOL hasCreateCardViewError;
@property (nonatomic) BOOL didBindCardData;
@property (nonatomic) BOOL hasBindCardDataError;
@property (nonatomic) Q type;
@property (nonatomic) BOOL hasBizError;
@property (nonatomic) BOOL isShowingLoading;
- (BOOL)didCreateCardView;
- (void)setDidCreateCardView:;
- (BOOL)hasCreateCardViewError;
- (void)setHasCreateCardViewError:;
- (BOOL)didBindCardData;
- (void)setDidBindCardData:;
- (BOOL)hasBindCardDataError;
- (void)setHasBindCardDataError:;
- (BOOL)hasBizError;
- (void)setHasBizError:;
- (BOOL)isShowingLoading;
- (void)setIsShowingLoading:;
- (unsigned long long)type;
- (void)setType:;
@end
