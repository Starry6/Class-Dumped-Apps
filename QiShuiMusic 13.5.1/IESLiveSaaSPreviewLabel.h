@interface IESLiveSaaSPreviewLabel : BDDynamicMTLModel
@property (nonatomic) NSInteger type;
@property (nonatomic) NSArray labelTipsArray;
@property (nonatomic) NSInteger labelType;
@property (nonatomic) IESLiveSaaSImage labelImage;
@property (nonatomic) BOOL hitTest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)labelImageJSONTransformer;
+ (id)labelTipsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
