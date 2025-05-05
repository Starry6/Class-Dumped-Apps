@interface QLPreviewReplyAttachment : NSObject
@property (nonatomic) UTType contentType;
@property (nonatomic) NSData data;
- (void)setContentType:;
- (id)data;
- (id)contentType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setData:;
- (id)initWithData:contentType:;
+ (BOOL)supportsSecureCoding;
@end
