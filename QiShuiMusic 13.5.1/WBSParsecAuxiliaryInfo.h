@interface WBSParsecAuxiliaryInfo : WBSParsecModel
@property (nonatomic) NSString topText;
@property (nonatomic) NSString middleText;
@property (nonatomic) NSString bottomText;
@property (nonatomic) NSString bottomTextColor;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)topText;
- (id)middleText;
- (id)bottomText;
- (id)bottomTextColor;
+ (id)schema;
@end
