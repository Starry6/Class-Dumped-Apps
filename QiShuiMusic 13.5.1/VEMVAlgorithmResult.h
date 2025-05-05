@interface VEMVAlgorithmResult : NSObject
@property (nonatomic) NSString photoPath;
@property (nonatomic) NSString algorithmName;
@property (nonatomic) NSString imagePath;
@property (nonatomic) Q algorithmResultType;
- (unsigned long long)algorithmResultType;
- (void)setAlgorithmResultType:;
- (id)imagePath;
- (void)setImagePath:;
- (void).cxx_destruct;
- (id)photoPath;
- (void)setPhotoPath:;
- (id)algorithmName;
- (void)setAlgorithmName:;
@end
