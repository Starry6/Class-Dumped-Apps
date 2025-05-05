@interface VSSpeechWordTimingInfo : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) {_NSRange=QQ} textRange;
- (void)setStartTime:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)startTime;
- (id)textRange;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setTextRange:;
+ (BOOL)supportsSecureCoding;
+ (id)wordTimingInfoFrom:timestamps:;
+ (id)utf16TimingInfoWithUTF8Range:withText:;
+ (unsigned long long)extraBytesFromUTF8ToUTF16With:totalLength:begin:end:;
+ (void)adjustWordTimingInfo:forContext:;
@end
