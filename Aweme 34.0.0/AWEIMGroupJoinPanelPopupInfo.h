@interface AWEIMGroupJoinPanelPopupInfo : MTLModel
@property (nonatomic) NSNumber type;
@property (nonatomic) NSArray noticeList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)noticeList;
- (void)setNoticeList:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)noticeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
