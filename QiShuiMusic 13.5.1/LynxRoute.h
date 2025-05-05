@interface LynxRoute : NSObject
@property (nonatomic) NSString templateUrl;
@property (nonatomic) NSString routeName;
@property (nonatomic) NSDictionary param;
- (id)initWithUrl:param:;
- (id)initWithUrl:routeName:param:;
- (id)routeName;
- (id)param;
- (void)setParam:;
- (void).cxx_destruct;
- (void)setRouteName:;
- (id)copyWithZone:;
- (id)templateUrl;
- (void)setTemplateUrl:;
@end
