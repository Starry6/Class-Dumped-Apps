@interface VEVideoFillConfig : NSObject
@property (nonatomic) Q fillAlgType;
@property (nonatomic) double algScale;
@property (nonatomic) NSString lensBinPath;
- (void)setLensBinPath:;
- (void)setFillAlgType:;
- (double)algScale;
- (unsigned long long)fillAlgType;
- (id)lensBinPath;
- (void)setAlgScale:;
- (id)init;
- (void).cxx_destruct;
@end
