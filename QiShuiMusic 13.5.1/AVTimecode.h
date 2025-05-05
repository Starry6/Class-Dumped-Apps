@interface AVTimecode : NSObject
@property (nonatomic) {CVSMPTETime=ssIIIssss} timecodeStruct;
@property (nonatomic) q frameNumber;
@property (nonatomic) {?=qiIq} frameDuration;
@property (nonatomic) I tc_flags;
- (long long)frameNumber;
- (id)frameDuration;
- (void)setFrameDuration:;
- (id)initWithTimecodeString:;
- (BOOL)stringIsValidNumericValue:;
- (id)timecodeStruct;
- (void)setTimecodeStruct:;
- (void)setFrameNumber:;
- (unsigned int)tc_flags;
- (void)setTc_flags:;
@end
