@interface IESJSMethod : NSObject
@property (nonatomic) NSString bridgeName;
@property (nonatomic) NSString methodName;
@property (nonatomic) NSString fullName;
- (id)bridgeName;
- (void)setBridgeName:;
- (id)fullName;
- (void).cxx_destruct;
- (id)methodName;
- (void)setMethodName:;
+ (id)jsMethodWithBridgeName:methodName:;
@end
