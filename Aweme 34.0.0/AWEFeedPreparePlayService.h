@interface AWEFeedPreparePlayService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)preparePlayerWithModel:;
- (id)matchPreparedPlayerWithModel:;
- (BOOL)preparePlayerWithReferString:awemeModel:;
- (void)stopPrepareIfNeedWithReferString:;
- (id)matchInitialPreparedPlayerWithReferString:awemeModel:;
@end
