@interface IESECLiveLayoutElementModel : MTLModel
@property (nonatomic) NSString elementName;
@property (nonatomic) IESECLiveElementConstraintInfo elementConstraintInfo;
@property (nonatomic) IESECLiveElementConstraintInfo elementLayout;
@property (nonatomic) IESECLiveElementDesignInfo designInfo;
@property (nonatomic) NSNumber visibility;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)designInfo;
- (id)elementConstraintInfo;
- (id)elementLayout;
- (void)setDesignInfo:;
- (void)setElementConstraintInfo:;
- (void)setElementLayout:;
- (void)setVisibility:;
- (id)visibility;
- (id)elementName;
- (void).cxx_destruct;
- (void)setElementName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
