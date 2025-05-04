@interface AWEIMInputFAQListEntity : MTLModel
@property (nonatomic) NSString sendCorpus;
@property (nonatomic) NSString content;
@property (nonatomic) NSString itemLabel;
@property (nonatomic) BOOL isFromUserAsk;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sendText;
- (BOOL)isFromUserAsk;
- (id)sendCorpus;
- (void)setSendCorpus:;
- (void)setIsFromUserAsk:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)itemLabel;
- (void)setItemLabel:;
+ (id)JSONKeyPathsByPropertyKey;
@end
