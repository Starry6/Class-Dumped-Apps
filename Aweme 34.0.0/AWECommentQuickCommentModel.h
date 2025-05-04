@interface AWECommentQuickCommentModel : AWEBaseApiModel
@property (nonatomic) NSArray constantWords;
@property (nonatomic) NSArray timedWords;
- (id)constantWords;
- (void)setConstantWords:;
- (id)timedWords;
- (void)setTimedWords:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
