@interface IESECListKitCellFeedbackData : MTLModel
@property (nonatomic) NSArray reasonList;
@property (nonatomic) q firstPageLimit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)firstPageLimit;
- (id)reasonList;
- (void)setFirstPageLimit:;
- (void)setReasonList:;
- (void).cxx_destruct;
+ (id)reasonListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
