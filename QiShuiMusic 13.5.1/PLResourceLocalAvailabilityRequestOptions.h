@interface PLResourceLocalAvailabilityRequestOptions : NSObject
@property (nonatomic) BOOL networkAccessAllowed;
@property (nonatomic) NSString taskIdentifier;
@property (nonatomic) BOOL wantsProgress;
@property (nonatomic) BOOL transient;
@property (nonatomic) @? dataHandler;
@property (nonatomic) NSString clientBundleID;
@property (nonatomic) BOOL shouldPrioritize;
@property (nonatomic) CPLResourceTransferTaskOptions downloadOptions;
- (void)setTransient:;
- (id)taskIdentifier;
- (id)init;
- (void)setClientBundleID:;
- (id)clientBundleID;
- (BOOL)isNetworkAccessAllowed;
- (void).cxx_destruct;
- (BOOL)isTransient;
- (void)setNetworkAccessAllowed:;
- (id)downloadOptions;
- (id)dataHandler;
- (void)setTaskIdentifier:;
- (void)setWantsProgress:;
- (void)setDownloadOptions:;
- (BOOL)wantsProgress;
- (void)setDataHandler:;
- (BOOL)shouldPrioritize;
@end
