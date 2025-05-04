@interface AWEIMSingleChatMenuDispatcherTracker : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasLocalUser;
@property (nonatomic) BOOL isCompanyProfile;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (BOOL)isCompanyProfile;
- (void)setIsCompanyProfile:;
- (void)startTrackMenuFetchWithLocalUser:;
- (void)endTrackMenuFetchWithMenuType:;
- (void)setHasLocalUser:;
- (BOOL)hasLocalUser;
- (void)setStartTime:;
- (void).cxx_destruct;
- (double)startTime;
@end
