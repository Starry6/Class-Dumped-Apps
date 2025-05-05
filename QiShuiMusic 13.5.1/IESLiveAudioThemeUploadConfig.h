@interface IESLiveAudioThemeUploadConfig : NSObject
@property (nonatomic) NSString anchorID;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) double compressionQuality;
- (id)anchorID;
- (void)setAnchorID:;
- (id)cropRect;
- (void)setCropRect:;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
- (void)setCompressionQuality:;
- (double)compressionQuality;
@end
