@interface EFFileCompression : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)log;
+ (BOOL)compressFile:error:;
+ (BOOL)compressDirectory:shouldCancel:error:;
+ (BOOL)_compressFile:error:;
+ (BOOL)_doCompressFile:errorCode:;
+ (id)_compressionQueueContext;
+ (id)_compressionLock;
@end
