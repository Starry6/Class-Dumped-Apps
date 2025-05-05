@interface IESECTaskBannerRequestModel : NSObject
@property (nonatomic) NSString taskEnterFrom;
@property (nonatomic) NSString taskType;
@property (nonatomic) NSDictionary taskRequestParams;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
- (id)logExtra;
- (void)setExtra:;
- (void)setLogExtra:;
- (void)setTaskEnterFrom:;
- (void)setTaskRequestParams:;
- (id)taskEnterFrom;
- (id)taskRequestParams;
- (id)extra;
- (void)setFrame:;
- (id)taskType;
- (id)frame;
- (void).cxx_destruct;
- (void)setTaskType:;
+ (id)frameWithDictionary:;
+ (id)taskBannerModelFromParams:;
@end
