@interface PTYModelInstance : NSObject
@property (nonatomic) NSDictionary features;
@property (nonatomic) NSDictionary labels;
@property (nonatomic) NSDictionary predicts;
@property (nonatomic) NSString instancId;
- (void)addLabel:value:;
- (void)addPredict:value:;
- (id)instancId;
- (id)predicts;
- (void)upload:biz:;
- (void)upload:biz:version:;
- (void)upload:biz:version:tag:;
- (id)labels;
- (void).cxx_destruct;
- (id)features;
- (id)initWithInstance:;
@end
