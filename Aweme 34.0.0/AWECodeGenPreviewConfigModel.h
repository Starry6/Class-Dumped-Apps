@interface AWECodeGenPreviewConfigModel : AWEBaseDataModel
@property (nonatomic) BOOL isPreview;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSInteger setType;
@property (nonatomic) NSInteger disableReason;
- (void)setSetType:;
- (int)disableReason;
- (void)setDisableReason:;
- (void)setStartTime:;
- (long long)endTime;
- (void)setEndTime:;
- (BOOL)isPreview;
- (long long)startTime;
- (void)setIsPreview:;
- (int)setType;
+ (id)JSONKeyPathsByPropertyKey;
@end
