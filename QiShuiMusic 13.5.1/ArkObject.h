@interface ArkObject : NSObject
@property (nonatomic) NSString arkData;
@property (nonatomic) QQApiObject qqApiObject;
- (id)arkData;
- (void)setQqApiObject:;
- (id)initWithData:qqApiObject:;
- (id)qqApiObject;
- (void)setArkData:;
+ (id)objectWithData:qqApiObject:;
@end
