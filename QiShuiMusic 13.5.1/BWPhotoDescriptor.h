@interface BWPhotoDescriptor : NSObject
@property (nonatomic) NSString photoIdentifier;
@property (nonatomic) I processingFlags;
@property (nonatomic) NSDate time;
@property (nonatomic) NSTimeZone timeZone;
@property (nonatomic) {?=qiIq} presentationTimeStamp;
- (void)setTimeZone:;
- (void)setTime:;
- (id)initWithPhotoIdentifier:processingFlags:time:timeZone:presentationTimeStamp:;
- (void)dealloc;
- (id)photoIdentifier;
- (id)time;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (unsigned int)processingFlags;
- (void)encodeWithCoder:;
- (void)setPresentationTimeStamp:;
- (id)presentationTimeStamp;
- (id)description;
- (id)timeZone;
- (id)initWithPhotoIdentifier:processingFlags:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
