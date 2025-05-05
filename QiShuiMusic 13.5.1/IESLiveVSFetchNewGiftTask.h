@interface IESLiveVSFetchNewGiftTask : NSObject
@property (nonatomic) NSNumber giftID;
@property (nonatomic) @? completionBlock;
- (id)giftID;
- (void)setGiftID:;
- (id)taskInfos;
- (void)unionTask:;
- (void)setCompletionBlock:;
- (void).cxx_destruct;
- (id)completionBlock;
@end
