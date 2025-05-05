@interface VCPPersonObservation : NSObject
@property (nonatomic) NSArray keypoints;
@property (nonatomic) float relativeActionScore;
@property (nonatomic) float absoluteActionScore;
@property (nonatomic) NSInteger personID;
@property (nonatomic) NSInteger revision;
- (int)personID;
- (void)setPersonID:;
- (void)setRevision:;
- (void).cxx_destruct;
- (int)revision;
- (id)keypoints;
- (void)setKeypoints:;
- (float)relativeActionScore;
- (void)setRelativeActionScore:;
- (float)absoluteActionScore;
- (void)setAbsoluteActionScore:;
@end
