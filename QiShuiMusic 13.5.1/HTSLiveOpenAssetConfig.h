@interface HTSLiveOpenAssetConfig : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage borderImage;
@property (nonatomic) NSString script;
@property (nonatomic) q assetId;
@property (nonatomic) q price;
@property (nonatomic) q textWidth;
@property (nonatomic) q textHeight;
@property (nonatomic) NSInteger textAlignType;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString linkAvatarBorderId;
@property (nonatomic) HTSLiveText templateText;
@property (nonatomic) BOOL hasTemplateText;
@property (nonatomic) NSString schema;
- (id)script;
- (void)setScript:;
- (id)borderImage;
- (void)setBorderImage:;
+ (id)descriptor;
@end
