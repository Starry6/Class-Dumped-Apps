@interface MFDecryptedAttachmentDataProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)storageLocationForAttachment:withMessage:;
- (void)fetchDataForAttachment:consumer:progress:completion:;
- (id)messageForAttachment:;
- (id)initWithDecryptedMessage:;
@end
