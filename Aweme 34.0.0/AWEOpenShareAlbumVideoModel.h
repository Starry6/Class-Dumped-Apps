@interface AWEOpenShareAlbumVideoModel : MTLModel
@property (nonatomic) q videoHeight;
@property (nonatomic) q videoWidth;
@property (nonatomic) NSNumber selectedNum;
@property (nonatomic) NSArray videoURLs;
@property (nonatomic) NSArray coverURLs;
@property (nonatomic) NSString awemeId;
@property (nonatomic) NSString desc;
@property (nonatomic) BOOL isTop;
@property (nonatomic) q diggCount;
@property (nonatomic) BOOL isLastSelected;
@property (nonatomic) q playCount;
@property (nonatomic) NSDictionary cooperationInfo;
@property (nonatomic) BOOL isNonSelect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)diggCount;
- (void)setAwemeId:;
- (void)setDiggCount:;
- (id)awemeId;
- (id)coverURLs;
- (void)setCoverURLs:;
- (id)cooperationInfo;
- (void)setIsTop:;
- (void)setCooperationInfo:;
- (BOOL)isLastSelected;
- (BOOL)isNonSelect;
- (id)selectedNum;
- (void)setSelectedNum:;
- (id)videoURLs;
- (void)setVideoURLs:;
- (void)setIsLastSelected:;
- (void)setIsNonSelect:;
- (void)setVideoWidth:;
- (long long)playCount;
- (void)setVideoHeight:;
- (void)setDesc:;
- (id)desc;
- (long long)videoWidth;
- (void).cxx_destruct;
- (long long)videoHeight;
- (void)setPlayCount:;
- (BOOL)isTop;
@end
