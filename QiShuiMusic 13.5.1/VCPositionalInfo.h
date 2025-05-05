@interface VCPositionalInfo : NSObject
@property (nonatomic) BOOL hasPendingChanges;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) I prominenceIndex;
@property (nonatomic) {tagAVCPositionalInfo=I{CGSize=dd}ddd} avcPositionalInfo;
@property (nonatomic) r^{tagVCSpatialAudioMetadataPositionalInfo=fffIII} metadataPositionalInfo;
@property (nonatomic) BOOL isInCanvas;
- (id)init;
- (BOOL)hasPendingChanges;
- (void)setIsVisible:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isVisible;
- (id)serialize;
- (BOOL)isInCanvas;
- (unsigned int)prominenceIndex;
- (void)setProminenceIndex:;
- (void)unserialize:;
- (id)metadataPositionalInfo;
- (id)avcPositionalInfo;
- (void)setAvcPositionalInfo:;
- (void)setIsInCanvas:;
+ (BOOL)supportsSecureCoding;
@end
