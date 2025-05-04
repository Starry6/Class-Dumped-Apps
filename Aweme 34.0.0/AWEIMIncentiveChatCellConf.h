@interface AWEIMIncentiveChatCellConf : NSObject
@property (nonatomic) AWEIMIncentiveChatCellConfDetail commonConf;
@property (nonatomic) AWEIMIncentiveChatCellConfDetail privateUpdateQuotaConf;
@property (nonatomic) AWEIMIncentiveChatCellConfDetail groupUpdateQuotaConf;
- (id)dictionaryRawData;
- (id)commonConf;
- (id)privateUpdateQuotaConf;
- (id)groupUpdateQuotaConf;
- (void)setCommonConf:;
- (void)setPrivateUpdateQuotaConf:;
- (void)setGroupUpdateQuotaConf:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
