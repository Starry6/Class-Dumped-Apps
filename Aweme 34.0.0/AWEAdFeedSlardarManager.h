@interface AWEAdFeedSlardarManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)willDisplayCellWithContext:;
- (void)didEndDisplayingCellWithContext:;
- (void)reportInfoWithAdCid:topviewCid:logExtra:;
- (void)reportInfoIsAdShowing:;
- (void)reportInfoWithAdCid:AndLogExtra:;
- (unsigned long long)moduleNames;
@end
