@interface AWENoticeGroupDisturbStruct : IESIMBaseApiModel
@property (nonatomic) NSString groupID;
@property (nonatomic) NSNumber groupDisturbStatus;
- (id)groupDisturbStatus;
- (BOOL)isDisturb;
- (void)setGroupDisturbStatus:;
- (void)setGroupID:;
- (id)groupID;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
