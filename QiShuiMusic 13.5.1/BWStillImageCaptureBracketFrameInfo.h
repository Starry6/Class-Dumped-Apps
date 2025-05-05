@interface BWStillImageCaptureBracketFrameInfo : BWStillImageCaptureFrameInfo
@property (nonatomic) NSInteger bracketedCaptureSequenceNumber;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithBracketedCaptureSequenceNumber:mainFlags:sifrFlags:;
- (int)bracketedCaptureSequenceNumber;
+ (BOOL)supportsSecureCoding;
+ (id)infoWithBracketedCaptureSequenceNumber:mainFlags:sifrFlags:;
@end
