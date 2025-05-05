@interface EDMessageAttachmentMetadata : NSObject
@property (nonatomic) q globalMessageID;
@property (nonatomic) NSString name;
@property (nonatomic) NSString mimePartNumber;
@property (nonatomic) NSNumber attachmentID;
@property (nonatomic) NSURL remoteURL;
@property (nonatomic) NSString ef_publicDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_publicDescription;
- (long long)globalMessageID;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)remoteURL;
- (id)initWithGlobalMessageID:name:mimePart:attachmentID:remoteURL:;
- (id)mimePartNumber;
- (id)attachmentID;
- (void)setAttachmentID:;
- (id)initWithGlobalMessageID:attachmentID:;
@end
