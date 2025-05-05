@interface BDARVADModelItems : NSObject
@property (nonatomic) NSMutableArray firstLevelPartition;
@property (nonatomic) NSMutableArray largerArray;
@property (nonatomic) NSMutableArray videoArray;
@property (nonatomic) NSMutableArray smallArray;
- (void)setLargerArray:;
- (id)firstLevelPartition;
- (id)largerArray;
- (void)setFirstLevelPartition:;
- (void)setSmallArray:;
- (void)setVideoArray:;
- (id)smallArray;
- (id)videoArray;
- (id)init;
- (void).cxx_destruct;
@end
