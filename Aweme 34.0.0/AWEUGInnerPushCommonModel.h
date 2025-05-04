@interface AWEUGInnerPushCommonModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) AWEUGInnerPushContentModel model;
@property (nonatomic) NSDictionary data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (void)setModel:;
- (id)statusCode;
- (id)model;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setStatusCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
