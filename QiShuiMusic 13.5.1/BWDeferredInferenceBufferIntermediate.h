@interface BWDeferredInferenceBufferIntermediate : BWDeferredBufferIntermediate
@property (nonatomic) NSString inferenceAttachedMediaKey;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)_shortString;
- (id)initWithBuffer:tag:inferenceAttachedMediaKey:portType:compressionProfile:URL:;
- (id)inferenceAttachedMediaKey;
+ (BOOL)supportsSecureCoding;
@end
