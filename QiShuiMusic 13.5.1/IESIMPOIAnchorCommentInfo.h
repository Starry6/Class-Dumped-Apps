@interface IESIMPOIAnchorCommentInfo : MTLModel
@property (nonatomic) NSArray descs;
@property (nonatomic) NSString grayLabel;
@property (nonatomic) IESIMPOIItemAnchorContentModel anchorContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)anchorContent;
- (id)descs;
- (id)grayLabel;
- (void)setAnchorContent:;
- (void)setDescs:;
- (void)setGrayLabel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
