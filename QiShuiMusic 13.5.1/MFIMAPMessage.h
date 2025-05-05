@interface MFIMAPMessage : MFMailMessage
@property (nonatomic) Q uniqueRemoteId;
@property (nonatomic) BOOL isPartial;
@property (nonatomic) BOOL hasTemporaryUid;
@property (nonatomic) I uid;
- (id)messageID;
- (unsigned int)uid;
- (void)setUid:;
- (unsigned long long)messageSize;
- (id)_privacySafeDescription;
- (void)setPreferredEncoding:;
- (id)remoteID;
- (id)originalMailboxURL;
- (unsigned long long)uniqueRemoteId;
- (void)setUniqueRemoteId:;
- (BOOL)isPartial;
- (void)setIsPartial:;
- (BOOL)isMessageContentsLocallyAvailable;
- (BOOL)hasTemporaryUid;
- (void)setHasTemporaryUid:;
- (id)remoteMailboxURL;
- (id)initWithFlags:size:uid:;
- (long long)compareByNumberWithMessage:;
@end
