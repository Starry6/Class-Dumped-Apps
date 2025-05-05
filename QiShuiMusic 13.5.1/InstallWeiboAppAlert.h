@interface InstallWeiboAppAlert : NSObject
@property (nonatomic) WBDataTransferObject transferObject;
- (void)alertWithTransferObject:;
- (void)alertWithTransferObject:isUpdate:;
- (void)setTransferObject:;
- (id)transferObject;
- (id)init;
- (void).cxx_destruct;
@end
