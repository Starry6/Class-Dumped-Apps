@interface IMSPIOutgoingAttachmentObject : NSObject
@property (nonatomic) NSString fileURL;
@property (nonatomic) BOOL isSensitive;
- (void)setFileURL:;
- (void).cxx_destruct;
- (id)fileURL;
- (BOOL)isSensitive;
- (id)initWithFileURL:isSensitive:;
- (void)setIsSensitive:;
@end
