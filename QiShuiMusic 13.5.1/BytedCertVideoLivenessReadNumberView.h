@interface BytedCertVideoLivenessReadNumberView : UILabel
@property (nonatomic) NSInteger maxLength;
- (void)updateNumber:maxLength:;
- (int)maxLength;
- (void)setMaxLength:;
- (void)clear;
@end
