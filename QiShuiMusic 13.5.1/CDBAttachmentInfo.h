@interface CDBAttachmentInfo : NSObject
@property (nonatomic) NSURL legacyURL;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString localRelativePath;
- (id)url;
- (void).cxx_destruct;
- (id)localRelativePath;
- (id)initWithLegacyURL:url:localRelativePath:;
- (id)legacyURL;
@end
