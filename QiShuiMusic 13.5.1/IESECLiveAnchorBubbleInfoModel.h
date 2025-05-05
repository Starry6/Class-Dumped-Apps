@interface IESECLiveAnchorBubbleInfoModel : MTLModel
@property (nonatomic) NSArray bubbleItemArray;
@property (nonatomic) NSString multiBubbleText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bubbleItemArray;
- (id)multiBubbleText;
- (void)setBubbleItemArray:;
- (void)setMultiBubbleText:;
- (void).cxx_destruct;
+ (id)bubbleItemArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
