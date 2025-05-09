@interface AWEIMMessageAttachmentDownloadViewModel : NSObject
@property (nonatomic) NSString messageID;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString localFilePath;
@property (nonatomic) NSString secretKey;
@property (nonatomic) q retryCount;
@property (nonatomic) q maxRetryCount;
@property (nonatomic) double progress;
@property (nonatomic) Q status;
@property (nonatomic) Q downloadResourceType;
@property (nonatomic) double size;
@property (nonatomic) NSError error;
@property (nonatomic) double decryptDurationInSec;
@property (nonatomic) BOOL didRefreshURL;
@property (nonatomic) BOOL needRefreshURL;
@property (nonatomic) AWEIMResourceURLModel downloadResourceUrlModel;
@property (nonatomic) <IESIMNetworkDownloadRequest> request;
- (unsigned long long)downloadResourceType;
- (double)decryptDurationInSec;
- (id)downloadResourceUrlModel;
- (void)setDecryptDurationInSec:;
- (void)resetRetryCount;
- (void)setDownloadResourceType:;
- (BOOL)didRefreshURL;
- (void)setDidRefreshURL:;
- (BOOL)needRefreshURL;
- (void)setNeedRefreshURL:;
- (void)setDownloadResourceUrlModel:;
- (void)setMaxRetryCount:;
- (long long)maxRetryCount;
- (void)setStatus:;
- (void)setSecretKey:;
- (void)setRetryCount:;
- (id)messageID;
- (void)setError:;
- (double)progress;
- (long long)retryCount;
- (id)conversationID;
- (void)setMessageID:;
- (id)secretKey;
- (double)size;
- (void).cxx_destruct;
- (id)error;
- (void)setSize:;
- (unsigned long long)status;
- (void)setRequest:;
- (id)request;
- (void)setProgress:;
- (void)setConversationID:;
- (id)localFilePath;
- (void)setLocalFilePath:;
@end
