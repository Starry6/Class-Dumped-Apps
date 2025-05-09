@interface IESLivePriviledgeEntranceButtonModel : NSObject
@property (nonatomic) NSString panelURL;
@property (nonatomic) q metaID;
@property (nonatomic) HTSLiveText text;
@property (nonatomic) HTSLiveText bubbleText;
@property (nonatomic) HTSLiveFlexImageStruct bubbleBackgroundImg;
@property (nonatomic) NSString bubbleURL;
@property (nonatomic) HTSLiveText awardTips;
@property (nonatomic) LightInfo lightInfo;
@property (nonatomic) DynamicInfo dynamicInfo;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) BOOL disableTip;
- (void)setDynamicInfo:;
- (id)awardTips;
- (id)bubbleBackgroundImg;
- (id)bubbleURL;
- (BOOL)disableTip;
- (id)lightInfo;
- (long long)metaID;
- (id)panelURL;
- (void)setAwardTips:;
- (void)setBubbleBackgroundImg:;
- (void)setBubbleURL:;
- (void)setDisableTip:;
- (void)setExtra:;
- (void)setLightInfo:;
- (void)setMetaID:;
- (void)setPanelURL:;
- (id)translateRichTextToText:;
- (id)translateToDynamicInfo:;
- (id)translateToFlexImageStruct:;
- (id)translateToLightInfo:;
- (void)updateEntranceButtonModelUseEntranceDetail:;
- (id)extra;
- (id)dynamicInfo;
- (void)setText:;
- (void).cxx_destruct;
- (id)text;
- (id)bubbleText;
- (void)setBubbleText:;
@end
