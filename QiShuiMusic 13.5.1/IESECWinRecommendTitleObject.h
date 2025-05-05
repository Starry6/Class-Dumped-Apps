@interface IESECWinRecommendTitleObject : NSObject
@property (nonatomic) NSString recommendText;
@property (nonatomic) IESECTracker tracker;
@property (nonatomic) NSString showTrack;
@property (nonatomic) NSDictionary showParams;
- (id)diffIdentifier;
- (id)edgeForObject;
- (BOOL)isEqualToDiffableObject:;
- (id)recommendText;
- (void)setRecommendText:;
- (void)setShowParams:;
- (void)setShowTrack:;
- (id)showParams;
- (id)showTrack;
- (void)setTracker:;
- (id)tracker;
- (void).cxx_destruct;
@end
