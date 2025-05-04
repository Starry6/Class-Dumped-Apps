@interface AWEDataFreeModel : NSObject
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) q showTime;
@property (nonatomic) NSNumber experiments;
@property (nonatomic) NSString schema;
@property (nonatomic) @? actionBlock;
- (long long)showTime;
- (void)setShowTime:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (void)setExperiments:;
- (id)experiments;
- (id)buttonTitle;
- (void)setButtonTitle:;
- (void)setActionBlock:;
- (id)actionBlock;
@end
