@interface IESECMallCardFeedback : MTLModel
@property (nonatomic) q type;
@property (nonatomic) NSString itemId;
@property (nonatomic) q itemType;
@property (nonatomic) NSString text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedbackString;
- (void)setItemType:;
- (void)setText:;
- (void)setType:;
- (long long)itemType;
- (long long)type;
- (void).cxx_destruct;
- (id)text;
- (id)itemId;
- (void)setItemId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
