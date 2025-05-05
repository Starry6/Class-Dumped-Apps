@interface VCPHandObservation : NSObject
@property (nonatomic) NSArray keypoints;
@property (nonatomic) NSInteger chirality;
@property (nonatomic) NSInteger handID;
@property (nonatomic) NSInteger revision;
- (void)setRevision:;
- (void).cxx_destruct;
- (int)revision;
- (id)keypoints;
- (int)chirality;
- (void)setKeypoints:;
- (void)setChirality:;
- (int)handID;
- (void)setHandID:;
@end
