@interface AWEIMFolloweeAwemeItem : NSObject
@property (nonatomic) q IESIMAwemeType;
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString awemeDesc;
@property (nonatomic) NSString secUid;
@property (nonatomic) IESIMURLModel coverURL;
@property (nonatomic) IESIMURLModel originCoverURL;
@property (nonatomic) q createTime;
@property (nonatomic) NSString createTimeReadableString;
@property (nonatomic) BOOL canShowTip;
- (long long)IESIMAwemeType;
- (id)awemeID;
- (id)awemeDesc;
- (BOOL)canShowTip;
- (id)createTimeReadableString;
- (id)originCoverURL;
- (id)secUid;
- (void)setAwemeDesc:;
- (void)setAwemeID:;
- (void)setIESIMAwemeType:;
- (void)setOriginCoverURL:;
- (void)setSecUid:;
- (long long)createTime;
- (void).cxx_destruct;
- (void)setCreateTime:;
- (id)coverURL;
- (void)setCoverURL:;
@end
