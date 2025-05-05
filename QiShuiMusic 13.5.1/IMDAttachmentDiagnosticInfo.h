@interface IMDAttachmentDiagnosticInfo : NSObject
@property (nonatomic) NSString guid;
@property (nonatomic) NSString originalGUID;
@property (nonatomic) NSString filePath;
@property (nonatomic) Q total_bytes;
@property (nonatomic) q ck_sync_state;
@property (nonatomic) q transfer_state;
@property (nonatomic) Q hide_attachment;
- (id)filePath;
- (void)setFilePath:;
- (void).cxx_destruct;
- (void)setGuid:;
- (id)guid;
- (id)description;
- (id)originalGUID;
- (void)setOriginalGUID:;
- (unsigned long long)total_bytes;
- (void)setTotal_bytes:;
- (long long)ck_sync_state;
- (void)setCk_sync_state:;
- (long long)transfer_state;
- (void)setTransfer_state:;
- (unsigned long long)hide_attachment;
- (void)setHide_attachment:;
@end
