@interface VEAmazingFeature : VEFilterFeature
@property (nonatomic) IESMMKeyFrameInfo featureKeyFrameInfo;
@property (nonatomic) NSMutableDictionary extraInfoDic;
@property (nonatomic) NSString resPath;
@property (nonatomic) NSString subStickerDir;
@property (nonatomic) NSMutableDictionary subStickers;
@property (nonatomic) NSInteger order;
@property (nonatomic) NSString params;
@property (nonatomic) NSString algoCachePath;
@property (nonatomic) NSString stopMotionPath;
@property (nonatomic) Q featureType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resPath;
- (id)getKeyFrameInfo;
- (void)setSubStickers:;
- (id)algoCachePath;
- (void)completeUpdateAllkeyFrames;
- (id)extraInfoDic;
- (id)extraInfoForKey:;
- (id)featureKeyFrameInfo;
- (id)getExtraInfoDict;
- (unsigned long long)getKeyFrameNum;
- (id)initWithPath:identifier:;
- (BOOL)needRefreshKeyFrame;
- (void)removeallKeyFrameInfo;
- (void)removekeyFrameInfo:;
- (void)setAlgoCachePath:;
- (void)setExtraInfo:forKey:;
- (void)setExtraInfoDic:;
- (void)setFeatureKeyFrameInfo:;
- (void)setResPath:;
- (void)setStopMotionPath:;
- (void)setSubStickerDir:;
- (void)setkeyFrameInfo:withPts:;
- (id)stopMotionPath;
- (id)subStickerDir;
- (id)subStickers;
- (unsigned long long)featureType;
- (id)init;
- (int)order;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)description;
- (void)setOrder:;
- (id)params;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setParams:;
- (void)setFeatureType:;
- (BOOL)isContentEqual:;
@end
