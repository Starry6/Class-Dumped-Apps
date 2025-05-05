@interface IESECLogScene : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q status;
- (void)setStatus:;
- (void)setName:;
- (id)dictionaryValue;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)name;
+ (id)sceneWithName:status:;
@end
