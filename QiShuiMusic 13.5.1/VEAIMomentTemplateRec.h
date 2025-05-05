@interface VEAIMomentTemplateRec : NSObject
@property (nonatomic) q coverId;
@property (nonatomic) NSString currentMomentId;
@property (nonatomic) NSArray usedPairs;
- (long long)coverId;
- (id)currentMomentId;
- (void)setCoverId:;
- (void)setCurrentMomentId:;
- (void)setUsedPairs:;
- (id)usedPairs;
- (void).cxx_destruct;
@end
