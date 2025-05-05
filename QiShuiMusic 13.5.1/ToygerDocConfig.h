@interface ToygerDocConfig : NSObject
@property (nonatomic) NSInteger thickness;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) float boundaryThreshold;
@property (nonatomic) NSInteger stackTime;
- (float)boundaryThreshold;
- (void)setBoundaryThreshold:;
- (void)setStackTime:;
- (int)stackTime;
- (void)setFrame:;
- (id)frame;
- (int)thickness;
- (void)setThickness:;
@end
