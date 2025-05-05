@interface BDWebImageLargeImageConfig : NSObject
@property (nonatomic) double fileSizeLimit;
@property (nonatomic) double memoryScaleLimit;
@property (nonatomic) double viewResolutionScaleLimit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)fileSizeLimit;
- (double)memoryScaleLimit;
- (void)setFileSizeLimit:;
- (void)setMemoryScaleLimit:;
- (void)setViewResolutionScaleLimit:;
- (double)viewResolutionScaleLimit;
+ (id)modelCustomPropertyMapper;
@end
