@interface FRCFrameInsertionPoint : NSObject
@property (nonatomic) {?=qiIq} presentationTimeStamp;
@property (nonatomic) Q numberOfFramesToInsert;
@property (nonatomic) {?=qiIq} interpolatedFrameDuration;
- (void)setPresentationTimeStamp:;
- (id)presentationTimeStamp;
- (id)interpolatedFrameDuration;
- (unsigned long long)numberOfFramesToInsert;
- (void)setInterpolatedFrameDuration:;
- (void)setNumberOfFramesToInsert:;
@end
