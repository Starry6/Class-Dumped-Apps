@interface AVCompositionTrackFormatDescriptionReplacement : NSObject
@property (nonatomic) r^{opaqueCMFormatDescription=} originalFormatDescription;
@property (nonatomic) r^{opaqueCMFormatDescription=} replacementFormatDescription;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithOriginalFormatDescription:andReplacementFormatDescription:;
- (id)originalFormatDescription;
- (id)replacementFormatDescription;
+ (BOOL)supportsSecureCoding;
@end
