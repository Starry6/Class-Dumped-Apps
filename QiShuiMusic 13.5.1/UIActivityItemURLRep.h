@interface UIActivityItemURLRep : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) UIImage thumbnail;
@property (nonatomic) q attachmentURLType;
- (void)setThumbnail:;
- (id)scheme;
- (id)thumbnail;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
- (BOOL)isFileURL;
- (long long)attachmentURLType;
- (void)setAttachmentURLType:;
@end
