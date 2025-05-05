@interface IESECBSTBaseModel : MTLModel
@property (nonatomic) NSNumber isBst;
@property (nonatomic) NSString bstType;
@property (nonatomic) NSString bstModel;
@property (nonatomic) NSString bstBiz;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bstType;
- (id)bstBiz;
- (id)bstModel;
- (id)isBst;
- (void)setBstBiz:;
- (void)setBstModel:;
- (void)setBstType:;
- (void)setExtraInfo:;
- (void)setIsBst:;
- (id)init;
- (void).cxx_destruct;
- (id)extraInfo;
+ (id)JSONKeyPathsByPropertyKey;
@end
