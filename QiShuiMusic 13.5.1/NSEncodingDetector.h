@interface NSEncodingDetector : NSObject
@property (nonatomic) Q nsEncoding;
@property (nonatomic) I cfEncoding;
- (double)confidence;
- (void)reset;
- (unsigned long long)nsEncoding;
- (unsigned int)cfEncoding;
- (void)softReset;
- (double)bytesRatio;
- (unsigned long long)maxSkipBytes;
- (id)initWithNSStringEncoding:CFStringEncoding:recognizeFunc:;
- (double)confidenceWith2Chars;
- (double)_ASCII_confidence;
- (double)_singleByte_confidence;
- (double)multiBytesRatio;
- (unsigned long long)recognizeString:withDataLength:intoBuffer:;
+ (id)detectorForCFStringEncoding:allowBackupDetectors:;
+ (id)recognizeFuncForCFStringEncoding:;
@end
