@interface CRTextDetectorResults : NSObject
@property (nonatomic) NSDictionary inputOptions;
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDate endTime;
@property (nonatomic) NSArray textFeatures;
@property (nonatomic) NSArray pyramidPreIntraScaleNMSTextFeatures;
@property (nonatomic) NSArray pyramidPostIntraScaleNMSTextFeatures;
@property (nonatomic) NSArray pyramidPostInterScaleNMSTextFeatures;
@property (nonatomic) NSMutableArray pyramidScaleSize;
- (void)setStartTime:;
- (void)setEndTime:;
- (id)startTime;
- (id)endTime;
- (void).cxx_destruct;
- (id)inputOptions;
- (void)setInputOptions:;
- (id)textFeatures;
- (void)setTextFeatures:;
- (id)pyramidPreIntraScaleNMSTextFeatures;
- (void)setPyramidPreIntraScaleNMSTextFeatures:;
- (id)pyramidPostIntraScaleNMSTextFeatures;
- (void)setPyramidPostIntraScaleNMSTextFeatures:;
- (id)pyramidPostInterScaleNMSTextFeatures;
- (void)setPyramidPostInterScaleNMSTextFeatures:;
- (id)pyramidScaleSize;
- (void)setPyramidScaleSize:;
@end
