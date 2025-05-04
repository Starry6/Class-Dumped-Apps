@interface AWEFamiliarFeedPreloadResponse : NSObject
@property (nonatomic) NSArray cardList;
@property (nonatomic) NSError error;
@property (nonatomic) NSDate fetchDate;
@property (nonatomic) BOOL hasFinishedInitFetch;
- (id)cardList;
- (void)setCardList:;
- (BOOL)hasFinishedInitFetch;
- (void)setHasFinishedInitFetch:;
- (id)fetchDate;
- (void)setFetchDate:;
- (void)setError:;
- (void).cxx_destruct;
- (id)error;
@end
