@interface AWECodeGenMateApplyModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenUserModel userModel;
@property (nonatomic) q createTime;
@property (nonatomic) NSArray messagesModelArray;
@property (nonatomic) q status;
@property (nonatomic) NSString defaultMessage;
@property (nonatomic) NSString mateApplyId;
@property (nonatomic) NSInteger heyStatus;
- (id)mateApplyId;
- (void)setMateApplyId:;
- (id)messagesModelArray;
- (void)setMessagesModelArray:;
- (int)heyStatus;
- (void)setHeyStatus:;
- (long long)createTime;
- (void)setStatus:;
- (void)setCreateTime:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (long long)status;
- (id)defaultMessage;
- (void)setDefaultMessage:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
