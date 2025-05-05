@interface BDWebImageDecodeConfig : NSObject
@property (nonatomic) BOOL downSampleEnabled;
@property (nonatomic) double downSampleImageWidth;
@property (nonatomic) double downSampleImageHeight;
@property (nonatomic) Q downSampleImageMemory;
@property (nonatomic) BOOL isSystemHeicDecoderFirst;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)downSampleEnabled;
- (double)downSampleImageHeight;
- (unsigned long long)downSampleImageMemory;
- (double)downSampleImageWidth;
- (BOOL)isSystemHeicDecoderFirst;
- (void)setDownSampleEnabled:;
- (void)setDownSampleImageHeight:;
- (void)setDownSampleImageMemory:;
- (void)setDownSampleImageWidth:;
- (void)setIsSystemHeicDecoderFirst:;
+ (id)modelCustomPropertyMapper;
@end
