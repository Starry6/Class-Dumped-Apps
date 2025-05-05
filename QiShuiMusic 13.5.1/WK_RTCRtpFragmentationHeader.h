@interface WK_RTCRtpFragmentationHeader : NSObject
@property (nonatomic) NSArray fragmentationOffset;
@property (nonatomic) NSArray fragmentationLength;
@property (nonatomic) NSArray fragmentationTimeDiff;
@property (nonatomic) NSArray fragmentationPlType;
- (void).cxx_destruct;
- (id)fragmentationOffset;
- (void)setFragmentationOffset:;
- (id)fragmentationLength;
- (void)setFragmentationLength:;
- (id)fragmentationTimeDiff;
- (void)setFragmentationTimeDiff:;
- (id)fragmentationPlType;
- (void)setFragmentationPlType:;
@end
