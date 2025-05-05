@interface MLFairPlayDecryptSessionManager : NSObject
@property (nonatomic) NSMutableDictionary modelPathToSessionID;
@property (nonatomic) ^{?=III{?=II[136C]I[4096C][128C]}{?=[16C][16C][16C][128C]}} sessionContext;
@property (nonatomic) NSObject<OS_dispatch_queue> syncQueue;
- (id)syncQueue;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)sessionContext;
- (BOOL)startDecryptionOfModelAtPath:usingKeyBlob:teamIdentifier:error:;
- (int)stopDecryptionOfModelAtPath:;
- (BOOL)stopDecryptionOfModelAtPath:error:;
- (id)modelPathToSessionID;
@end
