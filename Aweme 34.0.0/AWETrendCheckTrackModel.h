@interface AWETrendCheckTrackModel : MTLModel
@property (nonatomic) NSString propId;
@property (nonatomic) NSString musicId;
@property (nonatomic) NSString templateId;
@property (nonatomic) NSString duetId;
@property (nonatomic) NSString flashMobId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMusicId:;
- (id)musicId;
- (id)flashMobId;
- (void)setFlashMobId:;
- (id)propId;
- (void)setPropId:;
- (id)duetId;
- (void)setDuetId:;
- (void).cxx_destruct;
- (void)setTemplateId:;
- (id)templateId;
+ (id)JSONKeyPathsByPropertyKey;
@end
