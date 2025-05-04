@interface AWEDTOTextReaderModel : MTLModel
@property (nonatomic) NSString textId;
@property (nonatomic) NSString text;
@property (nonatomic) AWEDTOMusicClipData textAudioRange;
@property (nonatomic) NSString textAudioPath;
@property (nonatomic) NSString effectId;
@property (nonatomic) NSString effectName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textId;
- (void)setTextId:;
- (id)textAudioRange;
- (void)setTextAudioRange:;
- (id)textAudioPath;
- (void)setTextAudioPath:;
- (id)effectName;
- (void)setEffectName:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)effectId;
- (void)setEffectId:;
+ (id)textAudioRangeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
