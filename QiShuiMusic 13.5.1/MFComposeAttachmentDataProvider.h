@interface MFComposeAttachmentDataProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)storageLocationForAttachment:withMessage:;
- (void)fetchDataForAttachment:consumer:progress:completion:;
- (id)messageForAttachment:;
- (id)initWithData:forContentID:;
- (id)initWithAttachmentDataItemProvider:forContentID:;
- (void)_commonInitWithDataProvider:forContentID:;
- (void)addData:forContentID:;
- (void)addDataItemProvider:forContentID:;
- (void)removeDataForAttachment:;
- (void)recordPasteboardDataForAttachments:;
- (void)recordUndoDataForAttachments:;
- (id)_dataForAttachment:;
- (id)dataForContentID:;
- (id)rawDataForContentID:;
@end
