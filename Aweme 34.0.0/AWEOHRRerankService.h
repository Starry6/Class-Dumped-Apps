@interface AWEOHRRerankService : NSObject
@property (nonatomic) BOOL hasRerank;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)positionWithIndex:screenCenterX:layout:;
- (BOOL)shouldChangeWithHand:position:;
- (long long)toIndexWithFromIndex:maxIndex:currentIndex:currentPosition:screenCenterX:layout:;
- (id)initOHRRerankService;
- (id)rerankAwemeWithIndex:dataList:layout:;
- (BOOL)hasRerank;
- (void)setHasRerank:;
@end
