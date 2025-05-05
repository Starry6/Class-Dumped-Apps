@interface AVSpeechSynthesisMarker : NSObject
@property (nonatomic) q mark;
@property (nonatomic) Q byteSampleOffset;
@property (nonatomic) {_NSRange=QQ} textRange;
- (id)initWithCoder:;
- (id)textRange;
- (void)encodeWithCoder:;
- (long long)mark;
- (id)copyWithZone:;
- (void)setMark:;
- (void)setTextRange:;
- (id)initWithMarkerType:forTextRange:atByteSampleOffset:;
- (id)initWithMarkerType:name:forTextRange:atByteSampleOffset:;
- (unsigned long long)byteSampleOffset;
- (void)setByteSampleOffset:;
+ (BOOL)supportsSecureCoding;
@end
