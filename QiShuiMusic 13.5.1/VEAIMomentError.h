@interface VEAIMomentError : NSObject
@property (nonatomic) NSInteger algErrorBit;
@property (nonatomic) NSArray algErrorArray;
@property (nonatomic) NSInteger befError;
- (void)setAlgErrorBit:;
- (id)algErrorArray;
- (int)algErrorBit;
- (int)befError;
- (void)setAlgErrorArray:;
- (void)setBefError:;
- (void).cxx_destruct;
@end
