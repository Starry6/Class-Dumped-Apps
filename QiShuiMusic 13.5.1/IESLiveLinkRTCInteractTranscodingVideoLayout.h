@interface IESLiveLinkRTCInteractTranscodingVideoLayout : NSObject
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) NSArray regions;
@property (nonatomic) NSString appData;
@property (nonatomic) Q renderMode;
- (void)setBackgroundColor:;
- (id)regions;
- (id)backgroundColor;
- (void)setRenderMode:;
- (unsigned long long)renderMode;
- (void)setRegions:;
- (void).cxx_destruct;
- (void)setAppData:;
- (id)appData;
@end
