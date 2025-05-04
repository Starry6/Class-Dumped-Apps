@interface AWENearbyFeedPreRequestModel : NSObject
@property (nonatomic) BOOL isReqOnAir;
@property (nonatomic) NSArray dataWillShowInFmp;
@property (nonatomic) @? completionWhenWillEnterNearby;
- (id)dataWillShowInFmp;
- (BOOL)isReqOnAir;
- (void)setIsReqOnAir:;
- (void)setDataWillShowInFmp:;
- (id)completionWhenWillEnterNearby;
- (void)setCompletionWhenWillEnterNearby:;
- (void).cxx_destruct;
@end
