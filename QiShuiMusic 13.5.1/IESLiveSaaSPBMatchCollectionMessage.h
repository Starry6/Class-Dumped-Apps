@interface IESLiveSaaSPBMatchCollectionMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveSaaSPBCollectionItem collectionItem;
@property (nonatomic) BOOL hasCollectionItem;
+ (id)descriptor;
@end
