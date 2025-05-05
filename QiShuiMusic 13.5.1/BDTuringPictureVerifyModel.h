@interface BDTuringPictureVerifyModel : BDTuringVerifyModel
@property (nonatomic) double defaultWidth;
@property (nonatomic) double defaultHeight;
@property (nonatomic) q challengeCode;
- (void)appendKVToEventParameters:;
- (void)appendKVToQueryParameters:;
- (long long)challengeCode;
- (void)configVerifyView:;
- (id)createVerifyView;
- (void)setChallengeCode:;
- (void)setDefaultHeight:;
- (id)init;
- (double)defaultHeight;
- (double)defaultWidth;
- (void)setDefaultWidth:;
+ (id)modelWithCode:;
@end
