@interface VECaptureProcessParam : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger processInterval;
@property (nonatomic) {CGSize=dd} processSize;
- (int)processInterval;
- (void)setProcessSize:;
- (id)processSize;
- (void)setProcessInterval:;
- (id)init;
- (void)setType:;
- (int)type;
@end
