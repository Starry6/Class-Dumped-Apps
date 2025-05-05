@interface TLKRoundedCornerLabels : TLKStackView
@property (nonatomic) NSMutableArray roundedLabels;
@property (nonatomic) Q prominence;
@property (nonatomic) Q sizeConfiguration;
- (id)init;
- (void)setProminence:;
- (unsigned long long)prominence;
- (void).cxx_destruct;
- (void)setSizeConfiguration:;
- (unsigned long long)sizeConfiguration;
- (void)updateRoundedText:;
- (id)roundedLabels;
- (void)setRoundedLabels:;
@end
