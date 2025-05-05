@interface IESLivePlayerBizStainedTrackInfo : NSObject
@property (nonatomic) NSString bizDomain;
@property (nonatomic) NSString pageName;
@property (nonatomic) NSString blockName;
@property (nonatomic) NSString index;
- (id)bizDomain;
- (id)blockName;
- (id)defaultString:;
- (id)dictionaryInfo;
- (BOOL)hasNecessaryInfo;
- (void)setBizDomain:;
- (void)setBlockName:;
- (id)useScene;
- (id)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)description;
- (void)setPageName:;
- (id)pageName;
+ (BOOL)isPlayerBizDomain:inTargetBizDomain:;
@end
