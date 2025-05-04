@interface AWEIMSendAttachmentUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)getVideoTranscodeStageOptEnable;
+ (BOOL)getIMAttachmentDBAsyncEnable;
+ (BOOL)getIMAttachmentDBAddCacheEnable;
+ (BOOL)getIMAttachmentDBOperateRebuildEnable;
+ (BOOL)getIMAttachmentLocalExtOptEnable;
+ (id)getVideoUploadResponseCache:fileType:resourceMd5:useOrigin:;
+ (void)storeVideoUploadResponseCache:fileType:resourceMd5:response:useOrigin:;
+ (id)p_getStoreKey:resourceMd5:useOrigin:;
+ (id)getVideoTranscodeStageOptDic;
+ (id)getStoreResourcePath:resourceMd5:useOrigin:;
+ (void)storeResourcePath:resourceMd5:filePath:useOrigin:;
@end
