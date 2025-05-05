@interface ToygerMeta : ToygerBaseModel
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary score;
@property (nonatomic) NSDictionary collectInfo;
@property (nonatomic) NSNumber serialize;
- (void)setCollectInfo:;
- (id)collectInfo;
- (void)setSerialize:;
- (id)init;
- (id)score;
- (void)setType:;
- (id)type;
- (void)setScore:;
- (void).cxx_destruct;
- (id)serialize;
@end
