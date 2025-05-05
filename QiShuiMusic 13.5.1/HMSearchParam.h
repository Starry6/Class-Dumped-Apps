@interface HMSearchParam : NSObject
@property (nonatomic) NSString moduleId;
@property (nonatomic) NSString aid;
@property (nonatomic) HMSearchCondition condition;
@property (nonatomic) @ userInfo;
- (id)moduleId;
- (void)setModuleId:;
- (id)condition;
- (void)setCondition:;
- (id)userInfo;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (void)setAid:;
- (id)aid;
@end
