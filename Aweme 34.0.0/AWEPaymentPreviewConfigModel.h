@interface AWEPaymentPreviewConfigModel : AWEBaseApiModel
@property (nonatomic) BOOL isPreviewVideo;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) Q setType;
- (BOOL)isPreviewVideo;
- (void)setIsPreviewVideo:;
- (void)setSetType:;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (double)startTime;
- (unsigned long long)setType;
+ (id)JSONKeyPathsByPropertyKey;
@end
