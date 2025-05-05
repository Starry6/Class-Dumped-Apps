@interface FRCFaceHandLegBlock : NSObject
@property (nonatomic) Q category;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) Q numberOfBlocks;
- (id)rect;
- (void)setRect:;
- (void)setCategory:;
- (unsigned long long)category;
- (unsigned long long)numberOfBlocks;
- (void)setNumberOfBlocks:;
+ (id)faceHandLegBlockWithRect:numberOfBlocks:category:;
@end
