@interface ToygerDocFieldInfo : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString value;
@property (nonatomic) NSString feature;
@property (nonatomic) NSString feaVersion;
- (id)feaVersion;
- (void)setFeaVersion:;
- (void)setFeature:;
- (id)feature;
- (id)init;
- (void)setName:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)name;
@end
