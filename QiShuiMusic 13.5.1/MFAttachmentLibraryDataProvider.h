@interface MFAttachmentLibraryDataProvider : NSObject
@property (nonatomic) EDAttachmentPersistenceManager persistenceManager;
@property (nonatomic) MFMailMessageLibrary messageLibrary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithLibrary:;
- (void)setPersistenceManager:;
- (void).cxx_destruct;
- (id)persistenceManager;
- (id)storageLocationForAttachment:withMessage:;
- (void)fetchDataForAttachment:consumer:progress:completion:;
- (id)messageForAttachment:;
- (id)messageLibrary;
- (void)setMessageLibrary:;
@end
