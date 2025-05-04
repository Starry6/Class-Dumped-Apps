@interface AWEIMMessageFilePreviewMetaInfo : NSObject
@property (nonatomic) BOOL banned;
@property (nonatomic) BOOL fileExpired;
@property (nonatomic) BOOL URLExpired;
@property (nonatomic) NSString uri;
@property (nonatomic) NSArray urlList;
@property (nonatomic) q urlExpireTimeInSec;
@property (nonatomic) q fileExpireTimeInSec;
@property (nonatomic) q fileStatus;
- (BOOL)URLExpired;
- (void)setUrlExpireTimeInSec:;
- (void)setFileExpireTimeInSec:;
- (long long)fileExpireTimeInSec;
- (long long)urlExpireTimeInSec;
- (BOOL)banned;
- (BOOL)fileExpired;
- (void)setURLExpired:;
- (id)uri;
- (void)setFileStatus:;
- (void)setUri:;
- (void).cxx_destruct;
- (id)initWithDict:;
- (long long)fileStatus;
- (id)urlList;
- (void)setUrlList:;
@end
