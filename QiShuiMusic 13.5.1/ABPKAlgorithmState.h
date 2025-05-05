@interface ABPKAlgorithmState : NSObject
@property (nonatomic) BOOL image_preprocessing;
@property (nonatomic) BOOL detection2d;
@property (nonatomic) BOOL lifting3d;
@property (nonatomic) BOOL registration;
@property (nonatomic) BOOL retargeting;
- (id)init;
- (BOOL)registration;
- (id)toDict;
- (BOOL)image_preprocessing;
- (void)setImage_preprocessing:;
- (BOOL)detection2d;
- (void)setDetection2d:;
- (BOOL)lifting3d;
- (void)setLifting3d:;
- (void)setRegistration:;
- (BOOL)retargeting;
- (void)setRetargeting:;
@end
