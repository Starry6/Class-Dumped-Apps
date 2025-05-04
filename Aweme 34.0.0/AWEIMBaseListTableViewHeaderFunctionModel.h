@interface AWEIMBaseListTableViewHeaderFunctionModel : NSObject
@property (nonatomic) NSString functionName;
@property (nonatomic) NSString functionIcon;
@property (nonatomic) NSNumber functionHeight;
- (void)setFunctionIcon:;
- (void)setFunctionHeight:;
- (id)functionIcon;
- (id)functionHeight;
- (id)functionName;
- (void).cxx_destruct;
- (void)setFunctionName:;
+ (id)modelWithName:;
@end
