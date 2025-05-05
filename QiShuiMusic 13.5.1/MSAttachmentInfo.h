@interface MSAttachmentInfo : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSString filename;
- (id)filename;
- (id)url;
- (id)initWithCoder:;
- (void)setFilename:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithURL:filename:;
+ (BOOL)supportsSecureCoding;
@end
