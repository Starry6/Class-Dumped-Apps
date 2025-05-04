@interface AWESearchCardNicknameComponentModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString publishTime;
@property (nonatomic) NSString authorIntroduction;
@property (nonatomic) AWESearchCardTextTagComponentModel textTagComponentModel;
@property (nonatomic) AWESearchCustomTagComponentModel customTagComponentModel;
@property (nonatomic) NSDictionary logData;
- (id)publishTime;
- (void)setPublishTime:;
- (id)textTagComponentModel;
- (id)customTagComponentModel;
- (id)authorIntroduction;
- (void)setAuthorIntroduction:;
- (void)setTextTagComponentModel:;
- (void)setCustomTagComponentModel:;
- (id)logData;
- (void)setLogData:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
@end
