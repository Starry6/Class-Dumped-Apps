@interface IESLiveLinkRTCInteractPublicStreamLayout : NSObject
@property (nonatomic) q layoutMode;
@property (nonatomic) q interpolationMode;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) NSString backgroundImage;
@property (nonatomic) NSArray regions;
- (void)setBackgroundColor:;
- (id)regions;
- (void)setLayoutMode:;
- (id)backgroundColor;
- (void)setBackgroundImage:;
- (id)backgroundImage;
- (long long)layoutMode;
- (void)setRegions:;
- (void).cxx_destruct;
- (long long)interpolationMode;
- (void)setInterpolationMode:;
@end
