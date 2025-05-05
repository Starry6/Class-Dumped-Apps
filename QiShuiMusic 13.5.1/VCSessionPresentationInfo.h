@interface VCSessionPresentationInfo : NSObject
@property (nonatomic) BOOL hasPendingChanges;
@property (nonatomic) {tagAVCSessionPresentationInfo={CGRect={CGPoint=dd}{CGSize=dd}}IIC} avcSessionPresentationInfo;
@property (nonatomic) r^{tagVCSpatialAudioMetadataGlobalInfo=IffffffII} metadataGlobalInfo;
@property (nonatomic) C uiState;
- (id)init;
- (BOOL)hasPendingChanges;
- (id)initWithCoder:;
- (void)setDisplayID:;
- (void)encodeWithCoder:;
- (id)description;
- (id)serialize;
- (void)unserialize:;
- (id)avcSessionPresentationInfo;
- (void)setAvcSessionPresentationInfo:;
- (id)metadataGlobalInfo;
- (unsigned char)uiState;
+ (BOOL)supportsSecureCoding;
+ (unsigned int)layoutWithAVCLayout:;
+ (unsigned int)avcLayoutWithLayout:;
+ (unsigned char)uiStateWithAVCUIState:;
+ (unsigned char)avcUIStateWithUIState:;
+ (unsigned int)metadataSateWithUIState:;
@end
