@interface AWELongVideoAdPreviewConfig : MTLModel
@property (nonatomic) BOOL isPreview;
@property (nonatomic) double previewDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPreview;
- (double)previewDuration;
- (void)setIsPreview:;
- (void)setPreviewDuration:;
+ (id)JSONKeyPathsByPropertyKey;
@end
