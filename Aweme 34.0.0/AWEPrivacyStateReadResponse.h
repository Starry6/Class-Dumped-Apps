@interface AWEPrivacyStateReadResponse : AWESocialRelationResponse
@property (nonatomic) BOOL isExisted;
@property (nonatomic) Q type;
@property (nonatomic) NSString filterReason;
@property (nonatomic) NSDictionary itemDictionary;
- (id)filterReason;
- (void)setFilterReason:;
- (BOOL)isExisted;
- (void)setIsExisted:;
- (void)setItemDictionary:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)itemDictionary;
@end
