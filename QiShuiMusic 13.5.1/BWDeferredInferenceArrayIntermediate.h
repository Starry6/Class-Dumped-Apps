@interface BWDeferredInferenceArrayIntermediate : BWDeferredArrayIntermediate
@property (nonatomic) NSString inferenceAttachmentKey;
@property (nonatomic) NSString portType;
- (id)portType;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)inferenceAttachmentKey;
- (id)initWithArray:tag:inferenceAttachmentKey:portType:URL:;
+ (BOOL)supportsSecureCoding;
@end
