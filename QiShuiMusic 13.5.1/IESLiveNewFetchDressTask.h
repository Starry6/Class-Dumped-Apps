@interface IESLiveNewFetchDressTask : NSObject
@property (nonatomic) NSString dressID;
@property (nonatomic) @? completionBlock;
- (id)dressID;
- (void)setDressID:;
- (id)taskInfos;
- (void)unionTask:;
- (void)setCompletionBlock:;
- (void).cxx_destruct;
- (id)completionBlock;
@end
