@interface AWETemplateTagsActionModel : AWEBaseApiModel
@property (nonatomic) NSString eventID;
@property (nonatomic) q actionType;
@property (nonatomic) NSString dataRef;
@property (nonatomic) AWETemplateTagsLabelDetailData detailData;
- (void)setDataRef:;
- (id)detailData;
- (void)setDetailData:;
- (long long)actionType;
- (void)setActionType:;
- (id)eventID;
- (void).cxx_destruct;
- (void)setEventID:;
- (id)dataRef;
+ (id)JSONKeyPathsByPropertyKey;
@end
