@interface AWETeenPendantModel : AWEBaseApiModel
@property (nonatomic) NSString activityID;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) Q format;
@property (nonatomic) NSString schema;
@property (nonatomic) AWETeenPendantImagesModel resourceURLs;
- (void)setResourceURLs:;
- (id)schema;
- (unsigned long long)format;
- (void)setSchema:;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void)setFormat:;
- (void).cxx_destruct;
- (double)startTime;
- (id)activityID;
- (void)setActivityID:;
- (id)resourceURLs;
+ (id)resourceURLsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
