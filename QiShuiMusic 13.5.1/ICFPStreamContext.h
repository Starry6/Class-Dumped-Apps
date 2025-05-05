@interface ICFPStreamContext : NSObject
@property (nonatomic) Q accountID;
@property (nonatomic) NSData playerInfoContextRequestData;
- (void)dealloc;
- (unsigned long long)accountID;
- (void).cxx_destruct;
- (id)initWithVersion:contextID:contentInfo:returningError:;
- (BOOL)getPlayerDelegateInfoDataUsingPlayerDelegateInfoResponseData:returningData:error:;
- (BOOL)getStreamerInfoContextDataUsingPlayerInfoContextData:returningData:error:;
- (id)playerInfoContextRequestData;
@end
