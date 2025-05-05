@interface IESLiveSaaSUserExtraInfo : BDDynamicMTLModel
@property (nonatomic) BOOL isSilenceAnonymous;
@property (nonatomic) BOOL isContract;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isContract;
- (void)setIsContract:;
+ (id)JSONKeyPathsByPropertyKey;
@end
