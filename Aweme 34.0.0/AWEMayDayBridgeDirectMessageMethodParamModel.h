@interface AWEMayDayBridgeDirectMessageMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString cid;
@property (nonatomic) NSString type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString picUrl;
@property (nonatomic) NSString webUrl;
@property (nonatomic) NSString uiExtra;
@property (nonatomic) NSString aweType;
@property (nonatomic) NSString msgTrack;
@property (nonatomic) NSString hint;
@property (nonatomic) NSString bgUrl;
@property (nonatomic) NSString webUrlV2;
@property (nonatomic) NSString webUrlV2Version;
- (id)secUid;
- (id)aweType;
- (void)setSecUid:;
- (id)picUrl;
- (void)setPicUrl:;
- (id)bgUrl;
- (void)setAweType:;
- (id)msgTrack;
- (id)webUrlV2;
- (id)webUrlV2Version;
- (void)setMsgTrack:;
- (id)uiExtra;
- (void)setUiExtra:;
- (void)setBgUrl:;
- (void)setWebUrlV2Version:;
- (void)setWebUrlV2:;
- (id)cid;
- (void)setUid:;
- (id)uid;
- (void)setDesc:;
- (id)type;
- (id)desc;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)hint;
- (void)setHint:;
- (void)setWebUrl:;
- (id)webUrl;
- (void)setCid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
