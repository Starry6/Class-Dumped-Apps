@interface IESLiveEmojiInteractResource : IESLiveDynamicMTLModel
@property (nonatomic) IESLiveEmojiConfiguration fromImage;
@property (nonatomic) IESLiveEmojiConfiguration passImage;
@property (nonatomic) IESLiveEmojiConfiguration toImage;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)toImage;
- (id)fromImage;
- (id)passImage;
- (void)setFromImage:;
- (void)setToImage:;
- (void).cxx_destruct;
- (void)setPassImage:;
+ (id)fromImageJSONTransformer;
+ (id)passImageJSONTransformer;
+ (id)toImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
