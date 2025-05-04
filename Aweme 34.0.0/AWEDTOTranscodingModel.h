@interface AWEDTOTranscodingModel : MTLModel
@property (nonatomic) double bitrate;
@property (nonatomic) q outputWidth;
@property (nonatomic) q outputHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOutputWidth:;
- (long long)outputWidth;
- (long long)outputHeight;
- (void)setOutputHeight:;
- (double)bitrate;
- (void)setBitrate:;
+ (id)JSONKeyPathsByPropertyKey;
@end
