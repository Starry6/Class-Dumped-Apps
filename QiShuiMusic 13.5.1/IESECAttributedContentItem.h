@interface IESECAttributedContentItem : NSObject
@property (nonatomic) @? asyncMakeBlock;
@property (nonatomic) NSAttributedString text;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) q type;
@property (nonatomic) NSDictionary additionalAttributes;
@property (nonatomic) NSDictionary attributes;
- (void)asyncMakeWithCompletionHandler:;
- (id)asyncMakeBlock;
- (void)setAsyncMakeBlock:;
- (void)setText:;
- (void)setType:;
- (void)setAttributes:;
- (id)attributes;
- (long long)type;
- (BOOL)isCompleted;
- (void).cxx_destruct;
- (id)text;
- (void)setAdditionalAttributes:;
- (id)additionalAttributes;
- (void)setIsCompleted:;
+ (id)itemWithAsyncMakeBlock:placeHolderContent:;
+ (id)itemWithContent:;
@end
