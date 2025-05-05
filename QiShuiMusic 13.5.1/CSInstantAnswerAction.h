@interface CSInstantAnswerAction : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) NSString url;
- (id)url;
- (void)setType:;
- (id)initWithAttributes:;
- (void)setUrl:;
- (id)attributes;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithType:andUrl:;
+ (id)actionWithType:andUrl:;
@end
