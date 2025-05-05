@interface DADownloadContext : NSObject
@property (nonatomic) NSString attachmentUUID;
@property (nonatomic) NSString accountID;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) @? progressBlock;
@property (nonatomic) @? completionBlock;
- (id)progressBlock;
- (id)accountID;
- (void).cxx_destruct;
- (id)completionBlock;
- (id)queue;
- (void)finishedWithError:;
- (id)initWithAttachmentUUID:accountID:queue:downloadProgressBlock:completionBlock:;
- (void)updateProgressDownloadedByteCount:totalByteCount:;
- (id)attachmentUUID;
@end
