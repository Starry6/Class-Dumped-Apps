@interface VCCaptionsTranscriptionSegment : NSObject
@property (nonatomic) I confidence;
@property (nonatomic) NSString text;
@property (nonatomic) {_NSRange=QQ} range;
- (unsigned int)confidence;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)range;
- (void)encodeWithCoder:;
- (id)description;
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithConfidence:text:range:;
+ (BOOL)supportsSecureCoding;
@end
