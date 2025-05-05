@interface IESIMDiscoverySearchFeedbackModel : IESIMBaseApiModel
@property (nonatomic) NSString plainText;
@property (nonatomic) NSString highlightText;
@property (nonatomic) NSString schema;
- (id)highlightText;
- (void)setHighlightText:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)plainText;
- (void)setPlainText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
