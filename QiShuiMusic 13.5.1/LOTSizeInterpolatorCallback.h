@interface LOTSizeInterpolatorCallback : NSObject
@property (nonatomic) {CGSize=dd} fromSize;
@property (nonatomic) {CGSize=dd} toSize;
@property (nonatomic) double currentProgress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fromSize;
- (void)setFromSize:;
- (void)setToSize:;
- (id)sizeForFrame:startKeyframe:endKeyframe:interpolatedProgress:startSize:endSize:currentSize:;
- (double)currentProgress;
- (id)toSize;
- (void)setCurrentProgress:;
+ (id)withFromSize:toSize:;
@end
