@interface IESECGoodsScreenShotShareModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString itemid;
@property (nonatomic) NSString shareScene;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) BOOL useRebrandStyle;
@property (nonatomic) NSDictionary activityInfo;
- (BOOL)useRebrandStyle;
- (id)itemid;
- (void)setActivityInfo:;
- (void)setExtraInfo:;
- (void)setItemid:;
- (void)setShareScene:;
- (void)setUseRebrandStyle:;
- (id)shareScene;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)extraInfo;
- (id)activityInfo;
@end
