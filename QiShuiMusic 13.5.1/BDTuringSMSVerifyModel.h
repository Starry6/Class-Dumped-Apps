@interface BDTuringSMSVerifyModel : BDTuringVerifyModel
@property (nonatomic) NSString scene;
- (void)appendCommonKVParameters:;
- (id)createVerifyView;
- (id)init;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
+ (id)modelWithScene:;
@end
