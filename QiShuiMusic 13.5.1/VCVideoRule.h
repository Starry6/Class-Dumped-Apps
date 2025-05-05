@interface VCVideoRule : NSObject
@property (nonatomic) NSInteger iWidth;
@property (nonatomic) NSInteger iHeight;
@property (nonatomic) float fRate;
@property (nonatomic) NSInteger iPayload;
@property (nonatomic) NSString description;
@property (nonatomic) float fPref;
- (long long)compare:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithFrameWidth:frameHeight:frameRate:payload:priority:;
- (id)initWithFrameWidth:frameHeight:frameRate:;
- (id)initWithFrameWidth:frameHeight:frameRate:payload:;
- (long long)compareByPref:;
- (void)setToVideoRule:;
- (void)setFrameWidth:frameHeight:frameRate:;
- (BOOL)isVideoFullHD;
- (int)iWidth;
- (int)iHeight;
- (float)fRate;
- (float)fPref;
- (void)setFPref:;
- (int)iPayload;
@end
