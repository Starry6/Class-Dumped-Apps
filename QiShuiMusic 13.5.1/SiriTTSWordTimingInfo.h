@interface SiriTTSWordTimingInfo : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) {_NSRange=QQ} textRange;
@property (nonatomic) NSString description;
- (BOOL)isEqual:;
- (id)init;
- (void)setStartTime:;
- (id)initWithCoder:;
- (double)startTime;
- (id)textRange;
- (void)encodeWithCoder:;
- (id)description;
- (void)setTextRange:;
- (id)initWithStartTiming:textRange:;
+ (BOOL)supportsSecureCoding;
+ (void)setSupportsSecureCoding:;
@end
