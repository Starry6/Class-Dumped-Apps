@interface AWEFCoinTaskModel : MTLModel
@property (nonatomic) AWEFCoinTaskData taskData;
@property (nonatomic) AWEFCoinTaskExtra taskExtra;
@property (nonatomic) q statusCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)taskExtra;
- (void)setTaskExtra:;
- (id)taskData;
- (void)setTaskData:;
- (long long)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
