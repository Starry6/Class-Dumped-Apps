@interface IESLiveSaaSPBDisplayItem : GPBMessage
@property (nonatomic) NSInteger displayItemType;
@property (nonatomic) BOOL comboFresh;
@property (nonatomic) IESLiveSaaSPBSchemaInfo schemaInfo;
@property (nonatomic) BOOL hasSchemaInfo;
@property (nonatomic) IESLiveSaaSPBImagesItem imagesItem;
@property (nonatomic) BOOL hasImagesItem;
@property (nonatomic) IESLiveSaaSPBTextItem textItem;
@property (nonatomic) BOOL hasTextItem;
+ (id)descriptor;
@end
