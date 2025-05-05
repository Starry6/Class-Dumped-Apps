@interface VCABRDeviceInfo : NSObject
@property (nonatomic) NSInteger screenWidth;
@property (nonatomic) NSInteger screenHeight;
@property (nonatomic) NSInteger screenFps;
@property (nonatomic) NSInteger hwdecodeMaxLength;
@property (nonatomic) NSInteger hdrInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)getScreenHeight;
- (int)getHDRInfo;
- (int)getHWDecodeMaxLength;
- (int)getScreenFps;
- (int)getScreenWidth;
- (void)setHdrInfo:;
- (void)setHwdecodeMaxLength:;
- (void)setScreenFps:;
- (void)setScreenHeight:;
- (void)setScreenWidth:;
@end
