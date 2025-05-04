@interface AWEConcernEventManager : NSObject
@property (nonatomic) BOOL hasTrack;
@property (nonatomic) BOOL isConcern;
@property (nonatomic) NSString authorId;
- (void)setHasTrack:;
- (void)didConsumptionSuccess;
- (void)disCommentSuccess;
- (void)didPraseSuccess:;
- (BOOL)isConcern;
- (void)setIsConcern:;
- (void)addObserver;
- (void).cxx_destruct;
- (BOOL)hasTrack;
- (id)authorId;
- (void)setAuthorId:;
@end
