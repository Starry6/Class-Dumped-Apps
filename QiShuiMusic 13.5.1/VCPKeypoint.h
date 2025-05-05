@interface VCPKeypoint : NSObject
@property (nonatomic) {CGPoint=dd} location;
@property (nonatomic) float confidence;
- (float)confidence;
- (void)setConfidence:;
- (id)location;
- (void)setLocation:;
@end
