@interface LynxTextAttachmentInfo : NSObject
@property (nonatomic) q sign;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) BOOL nativeAttachment;
- (id)initWithSign:andFrame:;
- (BOOL)nativeAttachment;
- (void)setNativeAttachment:;
- (long long)sign;
- (id)frame;
@end
